// SENSORS
const int sensor_EC_P0 = A0;
const int sensor_PH = A1;
const int sensor_TEMP = A2;
const int sensor_EC_DO = 6;

// LCD
const int lcd_SDA = A4;
const int lcd_SCL = A5;

// GSM
const int sim900_RX = 0;
const int sim900_TX = 1;

// FLOAT SWITCH
const int float_switch_0 = 2;
const int float_switch_1 = 3;
const int float_switch_2 = 4;
const int float_switch_3 = 5;

// RELAYS
const int relay_0 = 14;
const int relay_1 = 15;
const int relay_2 = 16;
const int relay_3 = 17;
const int relay_4 = 18;
const int relay_5 = 19; 
const int relay_6 = 20;
const int relay_7 = 21;

// SD CARD READER
const int sdcard_MISO = 50;
const int sdcard_MOSI = 51;
const int sdcard_SCK = 52;
const int sdcard_CS = 53;


#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>

// Initialize GSM900
SoftwareSerial SIM900(sim900_RX, sim900_TX);


void setup() {
  // put your setup code here, to run once:

  // initialize the LCD
  lcd.init();
  lcd.backlight();

  // setup pinModes
  pinMode(sensor_EC_PO, INPUT);
  pinMode(sensor_EC_DO, INPUT);
  pinMode(sensor_PH, INPUT);
  pinMode(sensor_TEMP, INPUT);
  pinMode(float_switch_0, INPUT);
  pinMode(float_switch_1, INPUT);
  pinMode(float_switch_2, INPUT);
  pinMode(float_switch_3, INPUT);

  pinMode(relay_0, OUTPUT);
  pinMode(relay_1, OUTPUT);
  pinMode(relay_2, OUTPUT);
  pinMode(relay_3, OUTPUT);
  pinMode(relay_4, OUTPUT);
  pinMode(relay_5, OUTPUT);
  pinMode(relay_6, OUTPUT);
  pinMode(relay_7, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:

}


float get_temperature() {
  
}


float get_EC() {
  
}


float get_PH() {
  
}


/* get_water_level(): get water level of specified tank
 * 
 * @param int tank: specifies which tank to get water level of
 *    0: reservoir
 *    1: treatment
 *    2: seedling
 */
float get_water_level(tank) {
  
}


/* display_stats(): print sensor output to lcd screen
 * 
 * @param temperature: value from get_temperature()
 * @param ec_value: value from get_EC()
 * @param ph_level: value from get_PH()
 * @returns: N/A
 */
void display_stats(temperature, ec_value, ph_level) {
  lcd.clear();

  // insert implementation here
}


/* send_text_message(): send text message using gsm900 module
 * 
 * @param N/A: N/A
 * @returns: N/A
 */
void send_text_message() {

}


/* read_text_message(): read text message in gsm900 module
 *  
 *  @param N/A: N/A
 *  @returns: N/A
 */
void read_text_message() {
  
}


/* transfer_water_treatment_tank(): transfer water to be treated
 *    to the treatment tank
 *    
 * @param N/A: N/A
 * @returns: N/A
 */
void transfer_water_treatment_tank() {
  
}


/* treat_water(): treat water in treatment tank if EC is not
 *    within the acceptable range
 * 
 * @param N/A: N/A
 * @returns: N/A
 */
void treat_water() {
  
}


/* control_ph_level(): measure ph level of treated water,
 *   dispose water if not in acceptable range
 *   
 * @param N/A: N/A  
 * @returns: N/A
 */
void control_ph_level() {
  
}


/* dispose_water()
 * 
 * @param int tank: specifies which tank to dispose water off
 *    0: reservoir
 *    1: treatment
 *    2: seedling
 */
void dispose_water(tank) {
  
}


/* transfer_water_seedling_tank(): transfer water to seedling 
 *    tank till enough
 */
void transfer_water_seedling_tank() {
  
}


/* control_water_temperature(): regulate water temp in seedling
 *    tank
 * 
 */
void control_water_temperature() {
  
}
