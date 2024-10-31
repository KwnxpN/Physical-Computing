// Define the rows and columns for the keypad
const byte ROWS = 4; // Four rows
const byte COLS = 4; // Four columns
const int LED_REDD = 11;
const int LED_GREENN = 12;
const int LED_BLUEE = 13;

// Connect the keypad rows and columns to these Arduino pins
byte rowPins[ROWS] = {9, 8, 7, 6};   // Connect to the row pins of the keypad
byte colPins[COLS] = {5, 4, 3, 2};   // Connect to the column pins of the keypad

// Define the keymap (adjust this if you have a different keypad)
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

void setup() {
  Serial.begin(9600); // Start serial communication at 115200 baud rate
  pinMode(LED_REDD, OUTPUT);
  pinMode(LED_GREENN, OUTPUT);
  pinMode(LED_BLUEE, OUTPUT);

  // Initialize row pins as OUTPUT and set them HIGH initially
  for (int i = 0; i < ROWS; i++) {
    pinMode(rowPins[i], OUTPUT);
    digitalWrite(rowPins[i], HIGH);  // Set all rows to HIGH initially
  }

  // Initialize column pins as INPUT with pull-up resistors enabled
  for (int i = 0; i < COLS; i++) {
    pinMode(colPins[i], INPUT_PULLUP);  // Use pull-up resistors on columns
  }
}

void loop() {
  char pressedKey = getKey();  // Get the key that was pressed

  if (pressedKey != '\0') {  // If a key is detected
    Serial.print("Key pressed: ");
    Serial.println(pressedKey);
    switch (pressedKey) {
      case '1':
        digitalWrite(LED_REDD, LOW);
        digitalWrite(LED_GREENN, HIGH);
        digitalWrite(LED_BLUEE, HIGH);
        break;
     case '2':
        digitalWrite(LED_REDD, HIGH);
        digitalWrite(LED_GREENN, LOW);
        digitalWrite(LED_BLUEE, HIGH);
        break;
    case '3':
        digitalWrite(LED_REDD, HIGH);
        digitalWrite(LED_GREENN, HIGH);
        digitalWrite(LED_BLUEE, LOW);
        break;
    case 'A':
        digitalWrite(LED_REDD, LOW);
        digitalWrite(LED_GREENN, HIGH);
        digitalWrite(LED_BLUEE, LOW);
        break;
    case '0':
        digitalWrite(LED_REDD, LOW);
        digitalWrite(LED_GREENN, LOW);
        digitalWrite(LED_BLUEE, LOW);
        break;
    }
  }

  delay(200);  // Small delay to debounce the keypad
}

// Function to scan the keypad and return the pressed key
char getKey() {
  // Iterate over each row to detect a key press
  for (int row = 0; row < ROWS; row++) {
    // Set the current row to LOW
    digitalWrite(rowPins[row], LOW);

    // Check each column to see if a key is pressed
    for (int col = 0; col < COLS; col++) {
      if (digitalRead(colPins[col]) == LOW) {  // Key press detected
        digitalWrite(rowPins[row], HIGH);  // Set the row back to HIGH
        return keys[row][col];  // Return the pressed key based on row/col
      }
    }

    // Set the row back to HIGH before moving to the next row
    digitalWrite(rowPins[row], HIGH);
  }

  return '\0';  // No key press detected
}