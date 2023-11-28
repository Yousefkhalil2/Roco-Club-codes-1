#include<SoftwareSerial.h>

#define in1 2
#define in2 4
#define in3 7
#define in4 8
#define ENA 3
#define ENB 4 
char jou;

void setup() {
  Serial.begin(9600);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    jou = Serial.read();

    if (jou == 'F') {
     digitalWrite(in1, HIGH);
     digitalWrite(in2, LOW);
     digitalWrite(in3, HIGH);
     digitalWrite(in4, LOW);
     analogWrite(ENA, 280); //speed range from 0 to 280
     analogWrite(ENB, 280);
   }
   else if (jou == 'B') {
       digitalWrite(in1, LOW);
       digitalWrite(in2, HIGH);
       digitalWrite(in3, LOW);
       digitalWrite(in4, HIGH);

    }

   else if (jou == 'L') {
       digitalWrite(in1, HIGH);
       digitalWrite(in2, LOW);
       digitalWrite(in3, LOW);
       digitalWrite(in4, HIGH);

    }

   else if (jou == 'R') {
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
    }
  }
}






























