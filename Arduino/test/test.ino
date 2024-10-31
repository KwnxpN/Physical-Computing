const int analogPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(analogPin, INPUT);
}

void loop() {
  int sensorVal = analogRead(analogPin);

  Serial.println(sensorVal);
  delay(1000);
}