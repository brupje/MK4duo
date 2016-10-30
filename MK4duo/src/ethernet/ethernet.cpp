/**
 * MK4duo 3D Printer Firmware
 *
 * Based on Marlin, Sprinter and grbl
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 * Copyright (C) 2013 - 2016 Alberto Cotronei @MagoKimbra
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 */
#include "../../base.h"
#include <UIPEthernet.h>
#include <Arduino.h>


#if ENABLED(ETHERNET)

static char command_queue[ETHERNET_BUFSIZE][MAX_CMD_SIZE];
static uint8_t commands_in_queue=0	
	, cmd_queue_index_w=0
	, cmd_queue_index_r=0;

static EthernetServer server = EthernetServer(ETHERNET_LISTEN_PORT);
static EthernetClient clients[ETHERNET_MAX_CLIENTS];
static bool initComplete = false;

void ethernet_init() {

	
  SERIAL_EM( "Ethernet:Init");

#if ENABLED(ETHERNET_MAC)
  uint8_t mac[6] = ETHERNET_MAC;
#else
	uint8_t mac[6] = {0,0,0,0,0,0};
#endif
  IPAddress myIP(ETHERNET_BIND_ADDRESS);

  Ethernet.begin(mac,myIP);

  server.begin();
  SERIAL_EM( "Ethernet:ready");
	initComplete = true;
}


void ethernetEnqueue(const char* cmd) {
	if (*cmd == ';' || commands_in_queue >= ETHERNET_BUFSIZE) return;
  strcpy(command_queue[cmd_queue_index_w], cmd);
	cmd_queue_index_w = (cmd_queue_index_w + 1) % ETHERNET_BUFSIZE;
	commands_in_queue++;
}

void ethernet_process() {
	if (!initComplete)
		return;
	/*cleanup first*/
	for( int i = 0; i<ETHERNET_MAX_CLIENTS; i++){
		if (!(clients[i].connected())) 
			clients[i].stop();
	}

	EthernetClient client = server.available();



	if (client) {


		/* find out if we already know this client */
		bool newclient = true;
		for( int i = 0; i<ETHERNET_MAX_CLIENTS; i++)
			if (clients[i]==client) 
				newclient = false;

		if (newclient) {
			bool clientAssigned =false;
			for( int i = 0; i<ETHERNET_MAX_CLIENTS; i++){
				if (!clients[i]) {
					clients[i] = client;
					clientAssigned=true;

					client.println("note:Welcome!");
					//SERIAL_EM( "Ethernet:New client has connected");
					break;
				}
			}

			if (!clientAssigned) {
				client.println("error:Maximum number of connections reached!");
				client.stop();
				return;
			}
		}
		size_t size;

		for( int i = 0; i<ETHERNET_MAX_CLIENTS; i++){
			while((size = client.available()) > 0)
			{
				char* msg = (char*)malloc(size);
				char * prev;
				size = client.read((uint8_t*) msg,size);

				char* linepos = strchr(msg,0x0D);
				prev=msg;
				while ((linepos!=NULL) && (linepos < msg+size) ){


					char  curcmd[MAX_CMD_SIZE];
					memcpy(&curcmd,prev,linepos-prev);
					curcmd[linepos-prev]=0;

					ethernetEnqueue(curcmd);

					prev = linepos+1;
					if (*prev == 0x0A)
						prev++;
					linepos = strchr(prev,0x0D);
				}
				free(msg);
			}
		}
	}
}

bool ethernet_available() {
	return commands_in_queue > 0;
}



void ethernet_sendByte(char c) {
	if (!initComplete)
		return;

	for( int i = 0; i<ETHERNET_MAX_CLIENTS; i++)
		if (clients[i]) 
			clients[i].print(c);
	
}

const char * ethernet_getCommand() {
	char * retval =command_queue[cmd_queue_index_r];
	cmd_queue_index_r = (cmd_queue_index_r + 1) % ETHERNET_BUFSIZE;
	commands_in_queue--;
	return retval;
}

void ethernet_flush() {
	if (!initComplete)
		return;
	for( int i = 0; i<ETHERNET_MAX_CLIENTS; i++)
		if (clients[i]) 
			clients[i].flush();

}

#endif
