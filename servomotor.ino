#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards
int bouton = 8;
int etatbouton = 0;
int pos = 0;    // variable to store the servo position

void setup() {
  pinMode(bouton,INPUT);
  myservo.attach(6);  // attaches the servo on pin 6 to the servo object
}

void loop() 
{
 etatbouton = digitalRead(bouton);
  if(etatbouton == HIGH)
  {
    myservo.write(180);
    delay(5000);
    Serial.println("the buton is pressed");
    myservo.write(0);
    delay(150);
  }
  /*for (pos = 0; pos <= 30; pos += 1) { // goes from 0 degrees to 90 degrees
    // in steps of 1 degree
    myservo.write(pos);               // tell servo to go to position in variable 'pos'
    delay(100);             :          // waits 15ms for the servo to reach the position
  }
  for (pos = 30; pos >= 0; pos -= 1) zz{ // goes from 90 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(50);                       // waits 15ms for the servo to reach the position
  }*/
}
