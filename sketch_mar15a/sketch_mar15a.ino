void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,1);//pin 13 -- on
delay(300);
digitalWrite(13,0);//pin 13 -- off
digitalWrite(12,1);
delay(300);
digitalWrite(12,0);
digitalWrite(11,1);
delay(300);
digitalWrite(11,0);
digitalWrite(10,1);
delay(300);
digitalWrite(10,0);
digitalWrite(6,1);
delay(300);
digitalWrite(6,0);
digitalWrite(5,1);
delay(300);
digitalWrite(5,0);
digitalWrite(4,1);
delay(300);
digitalWrite(4,0);
digitalWrite(3,1);
delay(300);
digitalWrite(3,0);// mati

digitalWrite(4,1);
delay(300);
digitalWrite(4,0);
digitalWrite(5,1);
delay(300);
digitalWrite(5,0);
digitalWrite(6,1);
delay(300);
digitalWrite(6,0);
digitalWrite(10,1);
delay(300);
digitalWrite(10,0);
digitalWrite(11,1);
delay(300);
digitalWrite(11,0);
digitalWrite(12,1);
delay(300);
digitalWrite(12,0);
delay(300);
}
