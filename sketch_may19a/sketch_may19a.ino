/* Simple Temperature uses the lm35 in the basic centigrade temperature configu
ration
*/
float temp;
int tempPin = 0; // analog input pin, kalo nulisnya 012345, gausah pake pinmode, kalo nulisnya A012345 pake
int sampleTime = 1000; // 1 second dafault

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //inisialisasi serial
}

void loop() {
  // put your main code here, to run repeatedly:
//gets and prints the raw data from the lm35
temp = analogRead(tempPin); //membaca data dr pin A0
Serial.print("RAW DATA: ");
Serial.print (temp);
Serial.println(" ");
//converts raw data into degrees celsius and prints it out
// 500mV/1024=.48828125
temp = temp * 0.48828125; //persamaan konversi nilai ADC ke oC
Serial.print("CELSIUS: ");
Serial.print(temp);
Serial.println("*C ");
//converts celsius into fahrenheit
temp = temp *9 / 5;
temp = temp + 32;
Serial.print("FAHRENHEIT: ");
Serial.print(temp);
Serial.println("*F");
delay(sampleTime);
}
