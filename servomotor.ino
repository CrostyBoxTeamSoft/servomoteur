#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards
//int bouton = 8;
//int etatbouton = 0;
int pos = 0;    // variable to store the servo position

void setup() {
  pinMode(bouton,INPUT);
  myservo.attach(6);  // attaches the servo on pin 6 to the servo object
}

void loop() 
{
 /*etatbouton = digitalRead(bouton);
  if(etatbouton == HIGH)
  {
    myservo.write(180);
    delay(5000);
    Serial.println("the buton is pressed");
    myservo.write(0);
    delay(150);
  }*/
 
           myservo.write(5);  // Positionnement du servo à 5°
              delay(20000);  // délais d'une seconde
              myservo.write(175); // Positionnement du servo à 175°            
              delay(2000);  // délais d'une seconde   
}
