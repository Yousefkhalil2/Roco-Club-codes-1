int motorRF = 2; //right front motor
int motorRB = 3; //Left front motor
int motorLF = 4; //Right back motor
int motorLB = 5; //Left back motor
int lightF = 6;  //Front light
int lightB = 7;  //Back light
int horn = 8;    //Horn
int ena = 10;    //Enable A
int enb = 11;    //Enable B
int spd = 26;     //Speed
char val;
void setup()
{
  pinMode(motorRF, OUTPUT); //D2 set to IN1
  pinMode(motorRB, OUTPUT); //D3 set to IN2
  pinMode(motorLF, OUTPUT); //D4 set to IN3
  pinMode(motorLB, OUTPUT); //D5 set to IN4
  pinMode(motorLB, OUTPUT); //D6 set to Front Light
  pinMode(motorLB, OUTPUT);
  pinMode(motorLB, OUTPUT);
  pinMode(motorLB, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  while (Serial.available() > 0)
  {
    val = Serial.read();
    Serial.println(val);
  }
  if ( val == 'F')     //Forward
  {
    analogWrite(ena, spd);
    analogWrite(enb, spd);
    digitalWrite(motorRF, HIGH);
    digitalWrite(motorLF, HIGH);
    digitalWrite(motorRB, LOW);
    digitalWrite(motorLB, LOW);
  }
  else if (val == 'B') //Backward
  {
    analogWrite(ena, spd);
    analogWrite(enb, spd);
    digitalWrite(motorRF, LOW);
    digitalWrite(motorLF, LOW);
    digitalWrite(motorRB, HIGH);
    digitalWrite(motorLB, HIGH);
  }
  else if (val == 'L') //Left
  {
    analogWrite(ena, spd);
    analogWrite(enb, spd);
    digitalWrite(motorRF, LOW);
    digitalWrite(motorLF, HIGH);
    digitalWrite(motorRB, LOW);
    digitalWrite(motorLB, LOW);
  }
  else if (val == 'R') //Right
  {
    analogWrite(ena, spd);
    analogWrite(enb, spd);
    digitalWrite(motorRF, LOW);
    digitalWrite(motorLF, HIGH);
    digitalWrite(motorRB, LOW);
    digitalWrite(motorLB, LOW);
  }
  else if (val == 'S') //Stop
  {
    analogWrite(ena, spd);
    analogWrite(enb, spd);
    digitalWrite(motorRF, LOW);
    digitalWrite(motorLF, LOW);
    digitalWrite(motorRB, LOW);
    digitalWrite(motorLB, LOW);
  }
  else if (val == 'I') //Forward Right
  {
    analogWrite(ena, spd);
    analogWrite(enb, spd);
    digitalWrite(motorRF, LOW);
    digitalWrite(motorLF, HIGH);
    digitalWrite(motorRB, LOW);
    digitalWrite(motorLB, LOW);
  }
  else if (val == 'J') //Backward Right
  {
    analogWrite(ena, spd);
    analogWrite(enb, spd);
    digitalWrite(motorRF, LOW);
    digitalWrite(motorLF, LOW);
    digitalWrite(motorRB, LOW);
    digitalWrite(motorLB, HIGH);
  }
  else if (val == 'G') //Forward Left
  {
    analogWrite(ena, spd);
    analogWrite(enb, spd);
    digitalWrite(motorRF, HIGH);
    digitalWrite(motorLF, LOW);
    digitalWrite(motorRB, LOW);
    digitalWrite(motorLB, LOW);
  }
  else if (val == 'H') //Backward Left
  {
    analogWrite(ena, spd);
    analogWrite(enb, spd);
    digitalWrite(motorRF, LOW);
    digitalWrite(motorLF, LOW);
    digitalWrite(motorRB, HIGH);
    digitalWrite(motorLB, LOW);
  }
  else if (val == '1')
  {
    spd = 26;
  }
  else if (val == '2')
  {
    spd = 51;
  }
  else if (val == '3')
  {
    spd = 77;
  }
  else if (val == '4')
  {
    spd = 102;
  }
  else if (val == '5')
  {
    spd = 128;
  }
  else if (val == '6')
  {
    spd = 153;
  }
  else if (val == '7')
  {
    spd = 179;
  }
  else if (val == '8')
  {
    spd = 204;
  }
  else if (val == '9')
  {
    spd = 230;
  }
  else if (val == 'q')
  {
    spd = 255;
  }
  else if (val == 'W') //front Light ON
  {
    digitalWrite(lightF, HIGH);
  }
  else if (val == 'w') //front Light OFF
  {
    digitalWrite(lightF, LOW);
  }
  else if (val == 'U') //back Light ON
  {
    digitalWrite(lightB, HIGH);
  }
  else if (val == 'u') //back Light OFF
  {
    digitalWrite(lightB, LOW);
  }
  else if (val == 'V') //Horn ON
  {
    digitalWrite(horn, HIGH);
  }
  else if (val == 'v') //Horn OFF
  {
    digitalWrite(horn, LOW);
  }
}