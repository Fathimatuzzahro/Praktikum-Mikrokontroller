const int pinSuhu = A0;
float suhu, data;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pinSuhu, INPUT);
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
data = analogRead(pinSuhu);
suhu = (data*500/1023);
Serial.print("data: ");
Serial.print(data);
Serial.print(", suhu: ");
Serial.print(suhu);
Serial.println();
delay(1000);
if (suhu > 60){
  digitalWrite(11, HIGH); //merah
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  } else if (suhu < 27){
    digitalWrite(13, HIGH); //biru
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  } else {
    digitalWrite(12, HIGH); //kuning
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
}
}
