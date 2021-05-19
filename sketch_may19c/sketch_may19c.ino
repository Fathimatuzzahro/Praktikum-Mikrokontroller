const int pinSuhu = A0;
float suhu, data;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pinSuhu, INPUT);
pinMode(13, OUTPUT);
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
if (suhu >= 40){
  digitalWrite(13, HIGH);
  } else
  {
    digitalWrite(13, LOW);
}
}
