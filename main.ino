#include <NewPing.h>


#define trigPinBack 53    // Trigger Pin for sensor # 1
#define trigPinRight 51    // Trigger Pin for sensor # 2
#define trigPinFront 49    // Trigger Pin for sensor # 3
#define trigPinLeft 47    // Trigger Pin for sensor # 4
#define trigPinTop 45    // Trigger Pin for sensor # 5

#define echoBack 52    // Echo Pin for sensor # 1
#define echoRight 50    // Echo Pin for sensor # 2
#define echoFront 48    // Echo Pin for sensor # 3
#define echoLeft 46    // Echo Pin for sensor # 4
#define echoTop 44    // Echo Pin for sensor # 5

#define maxDistens 400 // The max distens it wil se

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
  Serial.begin (9600);
  pinMode(trigPinBack, OUTPUT);
  pinMode(trigPinRight, OUTPUT);
  pinMode(trigPinFront, OUTPUT);
  pinMode(trigPinLeft, OUTPUT);
  pinMode(trigPinTop, OUTPUT);

  pinMode(echoBack, INPUT);
  pinMode(echoRight, INPUT);
  pinMode(echoFront, INPUT);
  pinMode(echoLeft, INPUT);
  pinMode(echoTop, INPUT);

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
