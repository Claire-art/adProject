#include <SoftwareSerial.h>
#define BT_RXD 8
#define BT_TXD 7
SoftwareSerial Serial1(BT_RXD, BT_TXD);

int trigPin = 11;
int echoPin = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial1.begin(9600);
  
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  
  long duration, distance;
  long set_distance;
  
  duration = pulseIn(echoPin, HIGH);
  distance = ((float)(340*duration)/1000)/2;
  set_distance = distance
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = ((float)(340*duration)/1000)/2;
  
  if ((distance - set_distance) > 10 or (distance - set_distance) < -10) {
    Serial1.write("asdf");
    Serial.println("asdf");
  }
  
  set_distance = distance
  
  delay(2000);
}
