
 
#ifndef config_h
#define config_h
#include "grbl.h" 



#define DEFAULTS_GENERIC


#define BAUD_RATE 115200


#define CPU_MAP_ATMEGA328P 


#define CMD_STATUS_REPORT '?'
#define CMD_FEED_HOLD '!'
#define CMD_CYCLE_START '~'
#define CMD_RESET 0x18 
#define CMD_SAFETY_DOOR '@'


#define HOMING_INIT_LOCK 

#define HOMING_CYCLE_0 (1<<Z_AXIS)                
#define HOMING_CYCLE_1 ((1<<X_AXIS)|(1<<Y_AXIS))  


#define N_HOMING_LOCATE_CYCLE 1 

#define N_STARTUP_LINE 2 

#define N_DECIMAL_COORDVALUE_INCH 4 
#define N_DECIMAL_COORDVALUE_MM   3 
#define N_DECIMAL_RATEVALUE_INCH  1 
#define N_DECIMAL_RATEVALUE_MM    0 
#define N_DECIMAL_SETTINGVALUE    3 


#define MESSAGE_PROBE_COORDINATES
 

#define SAFETY_DOOR_SPINDLE_DELAY 4000
#define SAFETY_DOOR_COOLANT_DELAY 1000


#define ACCELERATION_TICKS_PER_SECOND 100 


#define ADAPTIVE_MULTI_AXIS_STEP_SMOOTHING  


#define TOOL_LENGTH_OFFSET_AXIS Z_AXIS 


#define VARIABLE_SPINDLE 

#define SPINDLE_MAX_RPM 1000.0 
#define SPINDLE_MIN_RPM 0.0    

#define MINIMUM_JUNCTION_SPEED 0.0 


#define MINIMUM_FEED_RATE 1.0 


#define N_ARC_CORRECTION 12 


#define ARC_ANGULAR_TRAVEL_EPSILON 5E-7 


#define DWELL_TIME_STEP 50 


#ifndef HOMING_CYCLE_0
  #error "Required HOMING_CYCLE_0 not defined."
#endif

#if defined(USE_SPINDLE_DIR_AS_ENABLE_PIN) && !defined(VARIABLE_SPINDLE)
  #error "USE_SPINDLE_DIR_AS_ENABLE_PIN may only be used with VARIABLE_SPINDLE enabled"
#endif

#if defined(USE_SPINDLE_DIR_AS_ENABLE_PIN) && !defined(CPU_MAP_ATMEGA328P)
  #error "USE_SPINDLE_DIR_AS_ENABLE_PIN may only be used with a 328p processor"
#endif

// ---------------------------------------------------------------------------------------


#endif
