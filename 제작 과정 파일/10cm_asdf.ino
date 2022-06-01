#include <SoftwareSerial.h>
#define BT_RXD 8
#define BT_TXD 7
SoftwareSerial bluetooth(BT_RXD, BT_TXD);

int trigPin = 11;
int echoPin = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  bluetooth.begin(9600);
  
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration, distance;
  char text = bluetooth.read()
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = ((float)(340*duration)/1000)/2;
  
  if (distance < 100) {
    bluetooth.println("방안에 누가 들어왔습니다!");
    Serial.println('1');
  }
  //if (bluetooth.available()){
  //  if (text == 'L') { 
  //  }
  //  if (text == 'R') {
  //  }
  //  if (text == 'S') {
  //  }
  //  if (text == 'B') {
  //  }
  //}
  
  delay(500);
}
