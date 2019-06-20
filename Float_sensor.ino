/*
Student: Michael Moloney
Class: CSC 4110 Embedded Systems
Instructor: Michael Weeks
*/

//modified from Professor Weeks' code

int led=12;
const int floatSensorPin = 2;

void setup() {
      pinMode (led, OUTPUT);
      Serial.begin(9600);
      // Make the floatSensorPin an input pin.
      pinMode(floatSensorPin, INPUT);
}

void loop()
{
      digitalWrite(floatSensorPin, HIGH);
      delay(100);
      Serial.print("Float sensor: ");
      Serial.println(digitalRead(floatSensorPin));
      if(digitalRead(floatSensorPin)!=0)
        digitalWrite(led, HIGH);
      else
        digitalWrite(led, LOW);
      delay(2000);
} 
