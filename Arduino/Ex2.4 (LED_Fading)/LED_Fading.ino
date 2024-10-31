const int ledPin1 = 5;
const int ledPin2 = 6;

int brightness1 = 0;
int brightness2 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ledPin1, brightness1);
  brightness1++;

  analogWrite(ledPin2, brightness2);
  brightness2 += 2;

  if (brightness1 > 255) {
    brightness1 = 0;
  }
  if (brightness2 > 255) {
    brightness2 = 0;
  }

  delay(10);
}
