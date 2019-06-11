#include <NewPing.h>
#include "motor.h"

#define SONAR_NUM 5             // Number of sensors.
#define MAX_DISTANCE 400        // Maximum distance (in cm) to ping.

NewPing sonar[SONAR_NUM] = {    // Sensor object array.
  // Each sensor's trigger pin, echo pin, and max distance to ping. 
  NewPing(53, 52, MAX_DISTANCE), // Back sensor #0
  NewPing(51, 50, MAX_DISTANCE), // Right sensor #1
  NewPing(49, 48, MAX_DISTANCE), // Front sensor #2
  NewPing(47, 46, MAX_DISTANCE), // Left sensor #3
  NewPing(45, 44, MAX_DISTANCE)  // Top sensor #4
};


#define ledPinLeft 39
#define ledPinFront 41
#define ledPinRitghet 43
#define ledPinBack 37

#define motoerPinA1 2
#define motoerPinA2 3
#define motoerPinA 2 // edit this pin
#define motoerPinB1 4
#define motoerPinB2 5
#define motoerPinB 3 // edit this pin


void setup() {
  // put your setup code here, to run once:
  Serial.begin (115200);

  // Led inikator
  pinMode(ledPinLeft, OUTPUT);
  pinMode(ledPinFront, OUTPUT);
  pinMode(ledPinRitghet, OUTPUT);
  pinMode(ledPinBack, OUTPUT);

  // moter pins
  pinMode(motoerPinA1, OUTPUT);
  pinMode(motoerPinA2, OUTPUT);
  pinMode(motoerPinA, OUTPUT);
  pinMode(motoerPinB1, OUTPUT);
  pinMode(motoerPinB2, OUTPUT);
  pinMode(motoerPinB, OUTPUT);

  Serial.print("Arduino is ready");
}

void loop() {
  // put your main code here, to run repeatedly:

}

void moveForvordin(int distens) {
  
}

void startMotorA(String direction, int speed){
  if (direction == "FORWARD") {
    digitalWrite(motoerPinA1, HIGH);
    digitalWrite(motoerPinA2, LOW);
  } else {
    digitalWrite(motoerPinA1, LOW);
    digitalWrite(motoerPinA2, HIGH);    
  }  
  
  // set speed to 200 out of possible range 0~255
  analogWrite(motoerPinA, speed);
}

void turn(int degrees) {
  int spinTime = degrees / 3.5;
  Serial.print("spinTime: " + spinTime);
}

void startMotorB(String direction, int speed){
  if (direction == "FORWARD") {
    digitalWrite(motoerPinB1, HIGH);
    digitalWrite(motoerPinB2, LOW);
  } else {
    digitalWrite(motoerPinB1, LOW);
    digitalWrite(motoerPinB2, HIGH);    
  }  
  // set speed to 200 out of possible range 0~255
  analogWrite(motoerPinB, speed);
}
