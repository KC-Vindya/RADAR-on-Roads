// TOLL TAX BARRIER
#include<Servo.h>
Servo myservo;
const int trigPin=3;
const int echoPin=5; 
long tmeduration;
int distance;



void setup() {

  myservo.attach(9);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
  
  

}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
   digitalWrite(trigPin,LOW);
  
tmeduration=pulseIn(echoPin,HIGH);
distance=(0.034*tmeduration)/2;

if(distance<=27){
  
  myservo.write(180);
  }
  else{
    myservo.write(0);}
  
  Serial.print("distance:");
    Serial.println(distance);
  
    delay(1);
  

}
