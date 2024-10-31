const int ledpin = 3;
const int potpin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potVal = analogRead(potpin);

  int brightness = potVal / 4;
  Serial.println(brightness);
  
  analogWrite(ledpin, brightness);
}
