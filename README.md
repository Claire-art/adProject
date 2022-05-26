# [1학년 1학기 어드벤처디자인 아두이노 프로젝트]

## 아이디어
- 풍속 자동 조절 선풍기
    - 온도 습도 체크해서 불쾌지수 계산한 뒤 높으면 바람을 더 쎄게 하는
- 시각 장애인용 점자 번역기
    - 블루투스 이용해서 앱에 글을 쓰면 점자로 한 글자씩 번역해주는 기계
 
- 강아지용 자동 급식기
    - 블루투스로 조작 혹은 버튼을 눌렀을 때 사료나 간식이 나오는 기계.
    - 정해진 시간에 나오게 할 수도 있음. 

- 스마트팜
    - 식물마다 적절한 온도, 흙의 습도가 있는데 온습도 센서로 화분이 식물에 알맞은 환경인지 lcd로 보여주는 기계

- 과열시 경보 울리는 경보기
    - 과열시에 경보 울리는
    - 멀티텝

- 악보 자동으로 넘겨주는 시스템
    - 블루투스 연결된 스마트폰을 터치하면 서보모터로 악보를 넘겨준다.
 
- 스마트워치
    - 음성을 텍스트로 변환해주어 LCD에 표시한다

- 🌻침입자 경고 시스템🌻
    - 문 앞에 설치해 초음파 센서로 누가 들어오는지 확인한다. 
    - 블루투스가 연결된 스마트폰을 인식하거나 혹은 블루투스로 암호를 입력하는 등으로 침입자가 아님을 확인한다.
    - 몇 초 내로 위 행동을 하지 않을시 경보를 울리거나 스마트폰으로 알림을 보낸다.
    - RC카를 조종해 침입자를 내쫓는다.

- 자동 가습기 조절 센서
    - 자동가습기 조절 온습도 사용해서 블루투스로 전원 조작
    - 온습도 센서로 습도를 확인해서 가습기에서 자동으로 정해진 습도에 맞춰지도록 습도를 조절하는
 
- 자동 조명 
   - 자동조명 내가 원하는시간을 설정해두면 알림과함께 블루투스로 조명을 온해주면 불이 커지지않을까? 난 왜냐 알람만으로 절대 한번에 일어나지않기때문이지
   - RTC 모듈을 사용해서 정해진 시간이 되면 조명이 자동으로 켜지는



--------------------
#### 레퍼런스

1. RC카 무선조종
     - RC카 무선조종 (블루투스) : https://github.com/namsewon1019/Arduino
     - RC카 무선조종 + 아두이노 블루투스 컨트롤러(앱) : https://deneb21.tistory.com/311


2. 카메라 오픈소스 (와이파이나 블루투스)
     - 카메라 라이브러리 : https://m.blog.naver.com/roboholic84/220821919602 (구입해야함)
     - https://www.youtube.com/watch?v=Dbq9oKptz0I
     - https://makejarvis.tistory.com/36

3. 초음파 센서에서 일정거리안으로 움직임이 관찰될시 블루투스를 통해 휴대폰에 알려주는 거(근데 얘는 우리가 짜야할듯)
     - 블루투스로 휴대폰에 알림 전송 : https://github.com/park1997/Arduino/blob/b14a8ec0dd94ff8faa5a281df7ec999ed2318b5f/README.md
