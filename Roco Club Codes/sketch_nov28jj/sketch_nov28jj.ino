#include<SoftwareSerial.h>

#define IN1 2
#define IN2 4
#define IN3 7
#define IN4 8
#define EN1 3
#define EN2 4
char jo;

void setup() {
 Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
 if (Serial.available()) {
   jo = Serial.read();
   if (jo == 'F') {
     digitalWrite(IN1, HIGH);
     digitalWrite(IN2, LOW);
     digitalWrite(IN3, HIGH);
     digitalWrite(IN4, LOW);
     analogWrite(EN1, 280);  //speed range from 0 to 280
     analogWrite(EN2, 280);
    }
    else if (jo == 'B') {
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, HIGH);
     digitalWrite(IN3, LOW);
     digitalWrite(IN4, HIGH);
   }
    else if (jo == 'L') {
     digitalWrite(IN1, HIGH);
     digitalWrite(IN2, LOW);
     digitalWrite(IN3, LOW);
     digitalWrite(IN4, HIGH);
   }
    else if (jo == 'R') {
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, HIGH);
     digitalWrite(IN3, HIGH);
     digitalWrite(IN4, LOW);
   }
    else if(jo == 'S') {
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, LOW);
     digitalWrite(IN3, LOW);
     digitalWrite(IN4, LOW);
    }
  
  }
}




































