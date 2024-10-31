int digitPatterns[10][7] = { { 1, 1, 1, 1, 1, 1, 0 },    // 0
                             { 0, 1, 1, 0, 0, 0, 0 },    // 1
                             { 1, 1, 0, 1, 1, 0, 1 },    // 2
                             { 1, 1, 1, 1, 0, 0, 1 },    // 3
                             { 0, 1, 1, 0, 0, 1, 1 },    // 4
                             { 1, 0, 1, 1, 0, 1, 1 },    // 5
                             { 1, 0, 1, 1, 1, 1, 1 },    // 6
                             { 1, 1, 1, 0, 0, 0, 0 },    // 7
                             { 1, 1, 1, 1, 1, 1, 1 },    // 8
                             { 1, 1, 1, 0, 0, 1, 1 } };  // 9

// Define the pins for each segment of the 7-segment display
const int segment_a = 2;
const int segment_b = 3;
const int segment_c = 4;
const int segment_d = 5;
const int segment_e = 6;
const int segment_f = 7;
const int segment_g = 8;
const int left_segment = 11;
const int right_segment = 12;

int text[8] = { 6, 6, 0, 7, 0, 0, 0, 9 };

void setup() {
  // set pin modes for each segment
  Serial.begin(9600);
  pinMode(left_segment, OUTPUT);
  pinMode(right_segment, OUTPUT);
  pinMode(segment_a, OUTPUT);
  pinMode(segment_b, OUTPUT);
  pinMode(segment_c, OUTPUT);
  pinMode(segment_d, OUTPUT);
  pinMode(segment_e, OUTPUT);
  pinMode(segment_f, OUTPUT);
  pinMode(segment_g, OUTPUT);
}

void loop() {
  // Loop through each digit (0-9)
  for (int i = 0; i < 8; i += 2) {
  unsigned long previousMillis = millis();
  const long interval = 1000;
    while (millis() - previousMillis < interval) {
      digitalWrite(left_segment, HIGH);
      digitalWrite(right_segment, LOW);
      displayDigit(text[i]);
      delay(5);
      digitalWrite(left_segment, LOW);
      digitalWrite(right_segment, HIGH);
      displayDigit(text[i + 1]);
      delay(5);
      Serial.println(i);
    }
  }
}

// void showTwoDigits(int digit1, int digit2) {

//   displayDigit(digit1, right_segment);
//   // millis();
//   delay(50);
//   displayDigit(digit2, left_segment);
// }

// Function to display a specific digit on the 7-segment display
void displayDigit(int digit) {
  // Set each segment according to the digitPatterns for the given digit
  digitalWrite(segment_a, digitPatterns[digit][0]);
  digitalWrite(segment_b, digitPatterns[digit][1]);
  digitalWrite(segment_c, digitPatterns[digit][2]);
  digitalWrite(segment_d, digitPatterns[digit][3]);
  digitalWrite(segment_e, digitPatterns[digit][4]);
  digitalWrite(segment_f, digitPatterns[digit][5]);
  digitalWrite(segment_g, digitPatterns[digit][6]);
}