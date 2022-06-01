// 2. 적외선 센서 바로 테스트하게 코드 미리 셋팅해두기
// ( 적외선 인식 + 휴대폰에 "움직임이 관찰되었습니다" 라고 알림보내는 거까지)

#include <SoftwareSerial.h>
#define BT_RXD 8
#define BT_TXD 7
SoftwareSerial Bluetooth(BT_RXD, BT_TXD);

int pirSensor 11 //인체감지 센서

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
  

  
  delay(500);
}


