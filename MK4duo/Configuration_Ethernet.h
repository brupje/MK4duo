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


#ifndef CONFIGURATION_ETHERNET
#define CONFIGURATION_ETHERNET


#define ETHERNET_MAC {0x00,0x01,0x02,0x03,0x04,0x05} //Overrides internal MAC if uncommented
#define ETHERNET_LISTEN_PORT 8876 //Port to listen on
#define ETHERNET_BIND_ADDRESS 192,168,1,19 //IP address to listen for incoming connections

#define ETHERNET_BUFSIZE 10 //Number of command in the buffer, waiting to be queued
#define ETHERNET_MAX_CLIENTS 4 //Maximum number of concurrent clients


#endif //CONFIGURATION_ETHERNET
