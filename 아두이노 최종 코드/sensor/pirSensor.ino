#include <SoftwareSerial.h>

//블루투스 PIN 설정
#define BT_RXD 8  //블루투스 TX
#define BT_TXD 9  //블루투스 RX

#define pirSensor 11 //인체감지 센서

SoftwareSerial Bluetooth(BT_RXD, BT_TXD); //시리얼 통신을 위한 객체선언
char text; //블루투스에서 받는 값

void setup() {
  Serial.begin(9600);
  Bluetooth.begin(9600);
  pinMode (pirSensor, INPUT);                //  핀모드 센서 입력값으로 설정
  
}

void loop() {
  
  if (digitalRead(pirSensor) == HIGH) {
    Bluetooth.write("방안에 누가 들어왔습니다!");  //  휴대폰 화면에 올라가는 메시지
    Serial.println("나가!");                  //  아두이노 시리얼 모니터에 올라가는 메시지. 확인용.
  }
  else {
    Serial.println("후,..");                 //  아두이노 시리얼 모니터에 올라가는 메시지. 확인용.
  }
  
  delay(100);
}
