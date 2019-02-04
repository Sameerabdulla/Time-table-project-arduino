#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

// OLED display TWI address
#define OLED_ADDR   0x3C

Adafruit_SSD1306 display(-1);

const int button= 2; //the pin for the push button
const int ledPin = 13; //led for the notification for the pushes

int pushCounter = 0; // number of push counter
int buttonState = 0; // high or low
int lastButtonState; //checking the state just before this push



void setup(){

  pinMode( button, INPUT); // taking values from the button
  pinMode( LED_BUILTIN, OUTPUT); //indicator for the pushes

  // these are all display codes DONT THINK TOO MUCH ABOUT IT
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);
  display.clearDisplay();
  display.display();

  
}


void loop(){

  buttonState = digitalRead(button); // reading if high or low

  if(buttonState != lastButtonState){ //conparing to the before state

    if( buttonState == HIGH){ // when pressed

      
       
      pushCounter ++; 
      
      }else{
        
        //do nothing bro
        }

      delay(50);
    }

    lastButtonState = buttonState; // new input defined

        if(pushCounter == 0 ){ // day of the week

        display.clearDisplay();
        // display a line of text
        display.setTextSize(1);
        display.setTextColor(WHITE);
        display.setCursor(18,30);
        display.print("monday timetable");

        // update display with all of the above graphics
        display.display();
      
      
      }else
      
      if(pushCounter == 1 ){ // period 1

        display.clearDisplay();
        // display a line of text
        display.setTextSize(2);
        display.setTextColor(WHITE);
        display.setCursor(25,30);
        display.print("DK");

        // update display with all of the above graphics
        display.display();
      
      
      }else
      
      if ( pushCounter == 2){ // period 2

        display.clearDisplay();
        // display a line of text
        display.setTextSize(2);
        display.setTextColor(WHITE);
        display.setCursor(16,30);
        display.print("Srijith");

        // update display with all of the above graphics
        display.display();
        
        }else
        
        if ( pushCounter == 3){ //period 3

        display.clearDisplay();
        // display a line of text
        display.setTextSize(2);
        display.setTextColor(WHITE);
        display.setCursor(25,30);
        display.print("LNG");

        // update display with all of the above graphics
        display.display();
        
        }else
        
        if ( pushCounter == 4){ //period 4

        display.clearDisplay();
        // display a line of text
        display.setTextSize(2);
        display.setTextColor(WHITE);
        display.setCursor(25,30);
        display.print("JOU");

        // update display with all of the above graphics
        display.display();
        
        }else
        
        if ( pushCounter == 5){ //period 5

        display.clearDisplay();
        // display a line of text
        display.setTextSize(2);
        display.setTextColor(WHITE);
        display.setCursor(16,30);
        display.print("Santha");

        // update display with all of the above graphics
        display.display();
        
        }else
        
        if ( pushCounter == 6){ //period 6

        display.clearDisplay();
        // display a line of text
        display.setTextSize(2);
        display.setTextColor(WHITE);
        display.setCursor(18,30);
        display.print("Deepa");

        // update display with all of the above graphics
        display.display();
        
        }else
        
        if ( pushCounter == 7){ //period 7

        display.clearDisplay();
        // display a line of text
        display.setTextSize(2);
        display.setTextColor(WHITE);
        display.setCursor(25,30);
        display.print("ENG");

        // update display with all of the above graphics
        display.display();
        
        }else
        
        if ( pushCounter == 8){ //period 8

        display.clearDisplay();
        // display a line of text
        display.setTextSize(2);
        display.setTextColor(WHITE);
        display.setCursor(16,30);
        display.print("Salima");

        // update display with all of the above graphics
        display.display();
        
        }else
        
        if ( pushCounter == 9){ //period 9

        display.clearDisplay();
        // display a line of text
        display.setTextSize(2);
        display.setTextColor(WHITE);
        display.setCursor(18,30);
        display.print("Sugu");

        // update display with all of the above graphics
        display.display();
        
        }else
        
        if ( pushCounter == 10){ //period 10

        display.clearDisplay();
        // display a line of text
        display.setTextSize(2);
        display.setTextColor(WHITE);
        display.setCursor(25,30);
        display.print("ENG");

        // update display with all of the above graphics
        display.display();
        
        }else
        
        if ( pushCounter == 11){ //period 11

        display.clearDisplay();
        // display a line of text
        display.setTextSize(1);
        display.setTextColor(WHITE);
        display.setCursor(8,12);
        display.print("By,");
        
        display.setTextSize(2);
        display.setTextColor(WHITE);
        display.setCursor(20,30);
        display.print("Rabeeh :)");
        // update display with all of the above graphics
        display.display();
        
        }else{
        
        display.clearDisplay();
        // display a line of text
        display.setTextSize(1);
        display.setTextColor(WHITE);
        display.setCursor(18,30);
        display.print("press reset :( ");

        // update display with all of the above graphics
        display.display();
        
          }
       

  if (pushCounter % 2 == 0) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }













  
}
