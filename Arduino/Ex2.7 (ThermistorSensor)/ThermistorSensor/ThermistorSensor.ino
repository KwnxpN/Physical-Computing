void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorVal = analogRead(A0);
  float voltage = (sensorVal / 1023.0) * 5;
  float r_thermis = 10000 * (voltage / (5-voltage));
  float tempK = (298.15 * 4050.0) / (298.15 * log(r_thermis / 10000.0) + 4050.0);
  float tempC = tempK - 272.15;

  Serial.println(sensorVal);
  Serial.print("Temperature : ");
  Serial.print(tempC);
  Serial.println(" C");

  delay(1000);
}

