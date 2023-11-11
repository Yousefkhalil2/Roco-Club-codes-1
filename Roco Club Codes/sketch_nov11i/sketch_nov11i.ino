String input;
int M1_A = 12;
int M2_A = 11;
int M1_B = 10;
int M2_B = 9;

void setup() {
  // right side
  pinMode(M1_A, OUTPUT);
  pinMode(M2_A, OUTPUT);
  // left side
  pinMode(M1_B, OUTPUT);
  pinMode(M2_B, OUTPUT);

  Serial.begin(9600);
  while (!Serial) 
  {
     // wait for serial port to connect. Needed for native USB port only
  }
}

void loop() {

  if (Serial.available())
    {   
        input = Serial.read();   // read input string from bluetooth
        Serial.println(input);

        if(input == "70") {
          Serial.println("foward");
          foward();
        }
        else if(input == "66"){
          Serial.println("back");
          back();
        }
        else if(input == "76"){
          Serial.println("left");
          rotateLeft();
        }
        else if(input == "82"){
          Serial.println("right");
          rotateRight();
        }
        else {
          Serial.println(input);
          stop();
        }


    }
  else{
    Serial.println("NOT AVAILABLE");
  }

}

int foward(){
  digitalWrite(M1_A, HIGH);
  digitalWrite(M2_A, LOW);
  digitalWrite(M1_B, HIGH);
  digitalWrite(M2_B, LOW);
}

int back(){
  digitalWrite(M1_A, LOW);
  digitalWrite(M2_A, HIGH);
  digitalWrite(M1_B, LOW);
  digitalWrite(M2_B, HIGH);
}

int rotateRight(){
  digitalWrite(M1_A, LOW);
  digitalWrite(M2_A, LOW);
  digitalWrite(M1_B, HIGH);
  digitalWrite(M2_B, LOW);
}

int rotateLeft(){
  digitalWrite(M1_A, HIGH);
  digitalWrite(M2_A, LOW);
  digitalWrite(M1_B, LOW);
  digitalWrite(M2_B, LOW);
}

int stop(){
  digitalWrite(M1_A, LOW);
  digitalWrite(M2_A, LOW);
  digitalWrite(M1_B, LOW);
  digitalWrite(M2_B, LOW);
}