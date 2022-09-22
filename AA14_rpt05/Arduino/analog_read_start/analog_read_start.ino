
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}




void loop() {
  int sensorValue=analogRead(A0);
  Serial.print("AA14,Present V(0~5.0):");
  float voltage=sensorValue*(5.0/1023.0);//V
  Serial.println(voltage);
  delay(500);
}
