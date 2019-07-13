/******************************************************************************
* 10
* Gen7 custom (Alfons3 Version)
* These Pins are assigned for the modified GEN7
* Board from Alfons3 Please review the pins and adjust it for your needs
******************************************************************************/


#define KNOWN_BOARD 1

//###BOARD_NAME
#if DISABLED(BOARD_NAME)
  #define BOARD_NAME "Gen7 (Alfons3)"
#endif
//@@@


//###X_AXIS
#define ORIG_X_STEP_PIN            21
#define ORIG_X_DIR_PIN             20
#define ORIG_X_ENABLE_PIN          24
#define ORIG_X_CS_PIN              NoPin

//###Y_AXIS
#define ORIG_Y_STEP_PIN            23
#define ORIG_Y_DIR_PIN             22
#define ORIG_Y_ENABLE_PIN          24
#define ORIG_Y_CS_PIN              NoPin

//###Z_AXIS
#define ORIG_Z_STEP_PIN            26
#define ORIG_Z_DIR_PIN             25
#define ORIG_Z_ENABLE_PIN          24
#define ORIG_Z_CS_PIN              NoPin

//###EXTRUDER_0
#define ORIG_E0_STEP_PIN           28
#define ORIG_E0_DIR_PIN            27
#define ORIG_E0_ENABLE_PIN         24
#define ORIG_E0_CS_PIN             NoPin
#define ORIG_SOL0_PIN              NoPin

//###EXTRUDER_1
#define ORIG_E1_STEP_PIN           NoPin
#define ORIG_E1_DIR_PIN            NoPin
#define ORIG_E1_ENABLE_PIN         NoPin
#define ORIG_E1_CS_PIN             NoPin
#define ORIG_SOL1_PIN              NoPin

//###EXTRUDER_2
#define ORIG_E2_STEP_PIN           NoPin
#define ORIG_E2_DIR_PIN            NoPin
#define ORIG_E2_ENABLE_PIN         NoPin
#define ORIG_E2_CS_PIN             NoPin
#define ORIG_SOL2_PIN              NoPin

//###EXTRUDER_3
#define ORIG_E3_STEP_PIN           NoPin
#define ORIG_E3_DIR_PIN            NoPin
#define ORIG_E3_ENABLE_PIN         NoPin
#define ORIG_E3_CS_PIN             NoPin
#define ORIG_SOL3_PIN              NoPin

//###EXTRUDER_4
#define ORIG_E4_STEP_PIN           NoPin
#define ORIG_E4_DIR_PIN            NoPin
#define ORIG_E4_ENABLE_PIN         NoPin
#define ORIG_E4_CS_PIN             NoPin
#define ORIG_SOL4_PIN              NoPin

//###EXTRUDER_5
#define ORIG_E5_STEP_PIN           NoPin
#define ORIG_E5_DIR_PIN            NoPin
#define ORIG_E5_ENABLE_PIN         NoPin
#define ORIG_E5_CS_PIN             NoPin
#define ORIG_SOL5_PIN              NoPin

//###EXTRUDER_6
#define ORIG_E6_STEP_PIN           NoPin
#define ORIG_E6_DIR_PIN            NoPin
#define ORIG_E6_ENABLE_PIN         NoPin
#define ORIG_E6_CS_PIN             NoPin
#define ORIG_SOL6_PIN              NoPin

//###EXTRUDER_7
#define ORIG_E7_STEP_PIN           NoPin
#define ORIG_E7_DIR_PIN            NoPin
#define ORIG_E7_ENABLE_PIN         NoPin
#define ORIG_E7_CS_PIN             NoPin
#define ORIG_SOL7_PIN              NoPin

//###ENDSTOP
#define ORIG_X_MIN_PIN             NoPin
#define ORIG_X_MAX_PIN             NoPin
#define ORIG_Y_MIN_PIN             NoPin
#define ORIG_Y_MAX_PIN             NoPin
#define ORIG_Z_MIN_PIN             NoPin
#define ORIG_Z_MAX_PIN             NoPin
#define ORIG_Z2_MIN_PIN            NoPin
#define ORIG_Z2_MAX_PIN            NoPin
#define ORIG_Z3_MIN_PIN            NoPin
#define ORIG_Z3_MAX_PIN            NoPin
#define ORIG_Z4_MIN_PIN            NoPin
#define ORIG_Z4_MAX_PIN            NoPin
#define ORIG_Z_PROBE_PIN           NoPin

//###SINGLE_ENDSTOP
#define X_STOP_PIN                  0
#define Y_STOP_PIN                  1
#define Z_STOP_PIN                  2

//###HEATER
#define ORIG_HEATER_HE0_PIN         4
#define ORIG_HEATER_HE1_PIN        NoPin
#define ORIG_HEATER_HE2_PIN        NoPin
#define ORIG_HEATER_HE3_PIN        NoPin
#define ORIG_HEATER_HE4_PIN        NoPin
#define ORIG_HEATER_HE5_PIN        NoPin
#define ORIG_HEATER_BED0_PIN        3
#define ORIG_HEATER_BED1_PIN       NoPin
#define ORIG_HEATER_BED2_PIN       NoPin
#define ORIG_HEATER_BED3_PIN       NoPin
#define ORIG_HEATER_CHAMBER0_PIN   NoPin
#define ORIG_HEATER_CHAMBER1_PIN   NoPin
#define ORIG_HEATER_CHAMBER2_PIN   NoPin
#define ORIG_HEATER_CHAMBER3_PIN   NoPin
#define ORIG_HEATER_COOLER_PIN     NoPin

//###TEMPERATURE
#define ORIG_TEMP_HE0_PIN           2
#define ORIG_TEMP_HE1_PIN          NoPin
#define ORIG_TEMP_HE2_PIN          NoPin
#define ORIG_TEMP_HE3_PIN          NoPin
#define ORIG_TEMP_HE4_PIN          NoPin
#define ORIG_TEMP_HE5_PIN          NoPin
#define ORIG_TEMP_BED0_PIN          1
#define ORIG_TEMP_BED1_PIN         NoPin
#define ORIG_TEMP_BED2_PIN         NoPin
#define ORIG_TEMP_BED3_PIN         NoPin
#define ORIG_TEMP_CHAMBER0_PIN     NoPin
#define ORIG_TEMP_CHAMBER1_PIN     NoPin
#define ORIG_TEMP_CHAMBER2_PIN     NoPin
#define ORIG_TEMP_CHAMBER3_PIN     NoPin
#define ORIG_TEMP_COOLER_PIN       NoPin

//###FAN
#define ORIG_FAN0_PIN              NoPin
#define ORIG_FAN1_PIN              NoPin
#define ORIG_FAN2_PIN              NoPin
#define ORIG_FAN3_PIN              NoPin
#define ORIG_FAN4_PIN              NoPin
#define ORIG_FAN5_PIN              NoPin

//###SERVO
#define SERVO0_PIN                 NoPin
#define SERVO1_PIN                 NoPin
#define SERVO2_PIN                 NoPin
#define SERVO3_PIN                 NoPin

//###SAM_SDSS
#define SDSS                       NoPin

//###MAX6675
#define MAX6675_SS_PIN             NoPin

//###MAX31855
#define MAX31855_SS0_PIN           NoPin
#define MAX31855_SS1_PIN           NoPin
#define MAX31855_SS2_PIN           NoPin
#define MAX31855_SS3_PIN           NoPin

//###LASER
#define ORIG_LASER_PWR_PIN         NoPin
#define ORIG_LASER_PWM_PIN         NoPin

//###MISC
#define ORIG_PS_ON_PIN             19
#define ORIG_BEEPER_PIN            NoPin
#define LED_PIN                    NoPin




