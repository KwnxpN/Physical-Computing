void setup() {
  // put your setup code here, to run once:
  pinMode(6, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sw_r = digitalRead(6);
  int sw_g = digitalRead(5);
  int sw_b = digitalRead(4);
  digitalWrite(10, 1);
  digitalWrite(11, 1);
  digitalWrite(12, 1);
  if (sw_r == 0) {
    Serial.println("R");
  }
  if (sw_g == 0) {
    Serial.println("G");
  }
  if (sw_b == 0) {
    Serial.println("B");
  }
  digitalWrite(12, sw_b);
  digitalWrite(11, sw_g);
  digitalWrite(10, sw_r);
}
