void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//waktu 1
digitalWrite(13,1);//pin 13 -- on
digitalWrite(12,1);
digitalWrite(11,1);
digitalWrite(10,1);
digitalWrite(9,1);
digitalWrite(8,1);
digitalWrite(7,1);
digitalWrite(6,1);
delay(300);
//waktu 2
digitalWrite(13,1);
digitalWrite(12,1);
digitalWrite(11,1);
digitalWrite(10,0);
digitalWrite(9,0);
digitalWrite(8,1);
digitalWrite(7,1);
digitalWrite(6,1);
delay(300);
//waktu 3
digitalWrite(13,1);
digitalWrite(12,1);
digitalWrite(11,0);
digitalWrite(10,0);
digitalWrite(9,0);
digitalWrite(8,0);
digitalWrite(7,1);
digitalWrite(6,1);
delay(300);
//waktu 4
digitalWrite(13,1);
digitalWrite(12,0);
digitalWrite(11,0);
digitalWrite(10,0);
digitalWrite(9,0);
digitalWrite(8,0);
digitalWrite(7,0);
digitalWrite(6,1);
delay(300);
//waktu 5
digitalWrite(13,1);
digitalWrite(12,1);
digitalWrite(11,0);
digitalWrite(10,0);
digitalWrite(9,0);
digitalWrite(8,0);
digitalWrite(7,1);
digitalWrite(6,1);
delay(300);
//waktu 6
digitalWrite(13,1);
digitalWrite(12,1);
digitalWrite(11,1);
digitalWrite(10,0);
digitalWrite(9,0);
digitalWrite(8,1);
digitalWrite(7,1);
digitalWrite(6,1);
delay(300);
//waktu 7
digitalWrite(13,1);
digitalWrite(12,1);
digitalWrite(11,1);
digitalWrite(10,1);
digitalWrite(9,1);
digitalWrite(8,1);
digitalWrite(7,1);
digitalWrite(6,1);
delay(300);
}
