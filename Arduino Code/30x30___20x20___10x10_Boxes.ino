
#include <Servo.h>

Servo myservo;  // create servo object to control a servo



void setup() {


   pinMode (11, INPUT);
   pinMode (13, INPUT);
   pinMode (12, INPUT);

   
   // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
  myservo.attach(3);  // attaches the servo on pin 9 to the servo object
  
}

void loop() {
  
  int Vx = digitalRead ( 11 ) ; // 30x30 Box
  delay(30); 
  int Vy = digitalRead ( 12 ) ; // 20x20 Box
  delay(30); 
  int Vz = digitalRead ( 13 ) ; // 10x10 Box
  delay(30); 

  
  if ( Vx == HIGH  )
  {
    myservo.write(170);              // tell servo to go to position '180'
    delay(30);                       // waits 30ms for the servo to reach the position
  }

  else if ( Vy == HIGH && Vx == LOW )
  {
    myservo.write(93);              // tell servo to go to position '90'
    delay(30);                       // waits 30ms for the servo to reach the position
  }

  else if ( Vy == LOW && Vx == LOW && Vz == HIGH)
  {
    myservo.write(15);              // tell servo to go to position '0'
    delay(30);                       // waits 30ms for the servo to reach the position
  }

  else 
  {
    myservo.write(15);              // tell servo to go to position '0'
    delay(30);                       // waits 30ms for the servo to reach the position
  
  }

  
}
