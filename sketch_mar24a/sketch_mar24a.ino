void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT); //merah1
pinMode(8, OUTPUT); //kuning1
pinMode(7, OUTPUT); //hijau1

pinMode(6, OUTPUT); //merah2
pinMode(5, OUTPUT); //kuning2
pinMode(4, OUTPUT); //hijau2

pinMode(3, OUTPUT); //merah3
pinMode(2, OUTPUT); //kuning3
pinMode(1, OUTPUT); //hijau3

/*
digitalWrite(9, 1);
digitalWrite(8, 1);
digitalWrite(7, 1);

digitalWrite(6, 1);
digitalWrite(5, 1);
digitalWrite(4, 1);

digitalWrite(3, 1);
digitalWrite(2, 1);
digitalWrite(1, 1);
*/
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(9, 1); //merah1 on
digitalWrite(5, 1); //kuning2 on
digitalWrite(1, 1); //hijau3 on
delay(300);
digitalWrite(9, 0); //merah1 off
digitalWrite(5, 0); //kuning2 off
digitalWrite(1, 0); //hijau3 off
delay(300);
digitalWrite(8, 1); //kuning1 on
digitalWrite(6, 1); //merah2 on
digitalWrite(2, 1); //kuning3 on
delay(300);
digitalWrite(8, 0); //kuning1 off
digitalWrite(6, 0); //merah2 off
digitalWrite(2, 0); //kuning3 off
delay(300);
digitalWrite(7, 1); //hijau1 on
digitalWrite(5, 1); //kuning2 on
digitalWrite(3, 1); //merah3 on
delay(300);
digitalWrite(7, 0); //hijau1 off
digitalWrite(5, 0); //kuning2 off
digitalWrite(3, 0); //merah3 off
delay(300);
digitalWrite(8, 1); //kuning1 on
digitalWrite(4, 1); //hijau2 on
digitalWrite(2, 1); //kuning3 on
delay(300);
digitalWrite(8, 0); //kuning1 off
digitalWrite(4, 0); //hijau2 off
digitalWrite(2, 0); //kuning3 off
delay(300);
}
