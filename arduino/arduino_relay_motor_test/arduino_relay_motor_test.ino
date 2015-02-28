/*
  Mega analogWrite() test
 	
  This sketch fades LEDs up and down one at a time on digital pins 2 through 13.  
  This sketch was written for the Arduino Mega, and will not work on previous boards.
 	
  The circuit:
  * LEDs attached from pins 2 through 13 to ground.

  created 8 Feb 2009
  by Tom Igoe
  
  This example code is in the public domain.
  
 */
// These constants won't change.  They're used to give names
// to the pins used:

void setup() {
  // set pins 2 through 13 as outputs:
    pinMode(3, OUTPUT); 
    pinMode(4, OUTPUT);
}

void loop() {
  // iterate over the pins:
    // fade the LED on thisPin from off to brightest:
    for (int brightness = 50; brightness < 255; brightness++) {
      analogWrite(3, brightness);
      delay(3);
    } 
    //digitalWrite(4, HIGH);
    // fade the LED on thisPin from brithstest to off:
    for (int brightness = 255; brightness >= 50; brightness--) {
      analogWrite(3, brightness);
      delay(3);
    } 
    //digitalWrite(4, LOW);
    // pause between LEDs:
    delay(100);
    
}
