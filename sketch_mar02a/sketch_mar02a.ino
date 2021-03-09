void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,1); //nyalakan LED
digitalWrite(13,HIGH);
delay(300); //menunggu 1 detik
digitalWrite(13,0); // LED mati
digitalWrite(10,LOW);
delay(300);
}
