// Line Follower Robot Project
// Copyright (c) 2024 Varun Singh J R
// Licensed under the MIT License. See LICENSE file in the project root for details.




// 5 array ir sensor  pin config
int s1 = 2; 
int s2 = 3; 
int s3 = 4; 
int s4 = 5; 
int s5 = 6; 

int v1, v2, v3, v4, v5;  // sensor value 

// motor driver pin config
int IN1 = 11; 
int IN2 = 12; 
int IN3 = 13; 
int IN4 = 7; 
int ENA = 9;
int ENB = 10;

void setup() {
  //Pin O/I (sensor)
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
  pinMode(s3, INPUT);
  pinMode(s4, INPUT);
  pinMode(s5, INPUT);
  //Pin O/I (Motor Driver )
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // Reading inverted sensor value 
  v1 = !digitalRead(s1);
  v2 = !digitalRead(s2);
  v3 = !digitalRead(s3);
  v4 = !digitalRead(s4);
  v5 = !digitalRead(s5);

  //Printing sensor value
  Serial.print(v1);
  Serial.print(v2); 
  Serial.print(v3); 
  Serial.print(v4); 
  Serial.print(v5); 
  Serial.println();

  //logic
  if (v1 == 0 && v2 == 0 && v3 == 0 && v4 == 0 && v5 == 1) {
    sharp_right_turn();
  } else if (v1 == 1 && v2 == 0 && v3 == 0 && v4 == 0 && v5 == 0) {
    sharp_left_turn();
  } else if ((v1 == 0 && v2 == 0 && v3 == 0 && v4 == 1 && v5 == 1) ||
             (v1 == 0 && v2 == 0 && v3 == 0 && v4 == 1 && v5 == 0) || 
            (v1 == 0 && v2 == 0 && v3 == 1 && v4 == 1 && v5 == 0) ||
            (v1 == 0 && v2 == 0 && v3 == 1 && v4 == 1 && v5 == 1)){
    right_turn();
  } else if ((v1 == 1 && v2 == 1 && v3 == 0 && v4 == 0 && v5 == 0) || 
              (v1 == 0 && v2 == 1 && v3 == 0 && v4 == 0 && v5 == 0)||
              (v1 == 1 && v2 == 1 && v3 == 1 && v4 == 0 && v5 == 0)|| 
              (v1 == 0 && v2 == 1 && v3 == 1 && v4 == 0 && v5 == 0)) {
    left_turn();
  } else if (v1 == 0 && v2 == 0 && v3 == 1 && v4 == 0 && v5 == 0) {
    straight();
  } 
    
  
}

void sharp_left_turn() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  analogWrite(ENA, 255);
  analogWrite(ENB, 100);
}

void sharp_right_turn() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);a
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 100);
  analogWrite(ENB, 255);
}

void right_turn() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 255);  
  analogWrite(ENB, 255);
}

void left_turn() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 255);
  analogWrite(ENB, 255);  
}

void stop() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}

void straight() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  analogWrite(ENA, 255);
  analogWrite(ENB, 255);
} 


