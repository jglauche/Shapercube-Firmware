


#ifndef __AVR_ATmega1280__
 #ifndef __AVR_ATmega2560__
 #error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
 #endif
#endif

#define X_STEP_PIN         26
#define X_DIR_PIN          28
#define X_ENABLE_PIN       24
#define X_MIN_PIN           3
#define X_MAX_PIN           2

#define Y_STEP_PIN         38
#define Y_DIR_PIN          40
#define Y_ENABLE_PIN       36
#define Y_MIN_PIN          16
#define Y_MAX_PIN          17

#define Z_STEP_PIN         44
#define Z_DIR_PIN          46
#define Z_ENABLE_PIN       42
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

#define E_STEP_PIN         32
#define E_DIR_PIN          34
#define E_ENABLE_PIN       30

#define E2_STEP_PIN         23
#define E2_DIR_PIN          25
#define E2_ENABLE_PIN       27


#define LED_PIN            13

//#define FAN_PIN            11 // UNCOMMENT THIS LINE FOR V1.0
#define FAN_PIN            9 // THIS LINE FOR V1.1
#define FAN_0_VALUE        2

#define PS_ON_PIN          -1
#define KILL_PIN           -1

//#define HEATER_0_PIN        12  // UNCOMMENT THIS LINE FOR V1.0
#define HEATER_0_PIN       8 // THIS LINE FOR V1.1
#define HEATER_1_PIN       10 // 
#define HEATER_2_PIN       -1 // heatbed


#define HEATER_0_LOW_VALUE 0
#define HEATER_0_HIGH_VALUE 180

#define HEATER_1_LOW_VALUE 0
#define HEATER_1_HIGH_VALUE 180

// heatbed
#define HEATER_2_LOW_VALUE 0
#define HEATER_2_HIGH_VALUE 255


#define TEMP_0_PIN          2   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!

#define TEMP_1_PIN          1   
#define TEMP_2_PIN          3    // Heatbed



