#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

uint32_t n_letter[3] = {0x00030838, 0x82C82682, 0x38218000};
uint32_t i_letter[3] = {0x0001F806, 0x00600600, 0x601F8000};
uint32_t g_letter[3] = {0x0000F010, 0x81001381, 0x080F8000};
uint32_t a_letter[3] = {0x0200700D, 0x80881FC1, 0x04104000};
uint32_t nothing[3] = {0x00000000, 0x00000000, 0x00000000};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  matrix.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  matrix.loadFrame(n_letter);
  delay(1000);
  matrix.loadFrame(i_letter);
  delay(1000);
  matrix.loadFrame(g_letter);
  delay(1000);
  matrix.loadFrame(nothing);
  delay(100);
  matrix.loadFrame(g_letter);
  delay(1000);
  matrix.loadFrame(a_letter);
  delay(1000);
}
