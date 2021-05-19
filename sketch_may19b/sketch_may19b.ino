//----------------------------------
// Sensor SUHU Teg. Referensi 5 Volt
//----------------------------------
const int pSuhu = A0;
float suhu, data;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pSuhu, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
data = analogRead(pSuhu);
suhu = data / 2.0479;
Serial.print("data: ");
Serial.print(data);
Serial.print(", suhu: ");
Serial.print(suhu);
Serial.println();
delay(1000);
}
