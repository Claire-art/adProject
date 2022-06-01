#include <SoftwareSerial.h>
#include <AFMotor.h>
AF_DCMotor motor_L(1);            
AF_DCMotor motor_R(4); 

#define BT_RXD A5
#define BT_TXD A4
SoftwareSerial bluetooth(BT_RXD, BT_TXD);      

char rec_data;
bool rec_chk = false;

void setup(){
  Serial.begin(9600);              // PC와의 시리얼 통신속도
  bluetooth.begin(9600);            // 스마트폰 블루투스 통신속도
  Serial.println("Eduino Smart Car Start!");


  // turn on motor
  motor_L.setSpeed(200);              // 왼쪽 모터의 속도   
  motor_L.run(RELEASE);
  motor_R.setSpeed(200);              // 오른쪽 모터의 속도   
  motor_R.run(RELEASE);
}

void loop(){
 
  if(bluetooth.available()){         // 블루투스 명령 수신
    rec_data = bluetooth.read();
    Serial.write(rec_data);
    rec_chk = true;
  }

  if(rec_data == 'g'){  // 전진, forward
    motor_L.run(FORWARD);  
    motor_R.run(FORWARD);        
  } 
  else if(rec_data == 'b'){ // 후진, back
    motor_L.run(BACKWARD);  
    motor_R.run(BACKWARD);    
  }
  else if(rec_data == 'l'){ // 좌회전, Go Left
    motor_L.run(RELEASE);  
    motor_R.run(FORWARD);     
  }
  else if(rec_data == 'r'){ // 우회전, Go Right
    motor_L.run(FORWARD);  
    motor_R.run(RELEASE);                
  }
  else if(rec_data == 's'){ // Stop 
    motor_L.run(RELEASE);       
    motor_R.run(RELEASE);
    }
}
