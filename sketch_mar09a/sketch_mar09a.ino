void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(12, OUTPUT);
pinMode(12, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//menyalakan 1 lampu bergantian
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

//nyala 2 lampu bersamaan
digitalWrite(13,1);//pin 13 -- on
digitalWrite(10,1);
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
digitalWrite(11,0);

//for
for(int i=13; i>9; i--) {
  digitalWrite(i, 1);
  delay(300);
  digitalWrite(i, 0);
}
/*
//while
int i=13;
while(i>9) {
  digitalWrite(i, 1);
  delay(300);
  digitalWrite(i, 0);
  i--;
}
*/

//while 2 lampu menyala bersama
int x=14;
int y=9;
int i=1;
while(i<3) {
  digitalWrite(x-i, 1);
  digitalWrite(y+i, 1);
  delay(300);
  digitalWrite(x-i, 0);
  digitalWrite(y+i, 0);
  i++;
}

}
