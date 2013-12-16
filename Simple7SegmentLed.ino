/*
  Blinking a 8 on a 7 segment display plus the decimal point
  see:  http://www.tinkersoup.de/lcd-oled-e-paper/7-segment-anzeige-led-blue/a-1122/
  see: https://www.sparkfun.com/products/9191
  see: http://www.instructables.com/id/Seven-Segment-Display-Tutorial/step3/Testing-The-Display/
  see: http://forum.arduino.cc/index.php/topic,22413.0.html
  see Datasheet (Anode pin marking is wrong): https://www.sparkfun.com/datasheets/Components/LED/YSD-160AB3C-8.pdf
  
  
  Libraries: https://github.com/Qtechknow/Arduino-Libraries/tree/master/Soda
            my fork: https://github.com/fabiantheblind/Seven-Segment-LED-Arduino-Libraries
  
  
  on the 7 segement
  Anode Pins are 3 and 8
  connect them to 5V
  connect the rest of the pins to a resistor and the according pins. 
  
     7/A
      _
 9/F |_| 6/B
 1/E |_| 4/C . <-- 5/DB (The point)
 
     2/D
     
  And the center bar is the 10/G    
  
 */
 

int PINS = 8;

int leds[] = {1, 2, 4, 5, 6, 7, 9, 10};

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  for(int p=0;p < PINS;p++){
  pinMode(leds[p], OUTPUT);     
  }

}

// the loop routine runs over and over again forever:
void loop() {
  for(int i = 0; i < PINS;i++){
  digitalWrite(leds[i], HIGH);   // turn the LED on (HIGH is the voltage level)

  
  }
  delay(1000);               // wait for a second
  for(int j = 0; j < PINS;j++){
  digitalWrite(leds[j], LOW);    // turn the LED off by making the voltage LOW

  }
  delay(1000);               // wait for a second
}
