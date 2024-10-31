int A=2, B=3, C=4, D=5, E=6, FF=7, G=8;
int port[7] = {A, B, C, D, E, FF, G}; // อาเรย์เพื่อจัดเก็บหมายเลขขา

void setup() {
  Serial.begin(9600); // เริ่มการสื่อสารผ่าน Serial ที่ 9600 bps
  for (int i = 0; i < 7; i++) {
    pinMode(port[i], OUTPUT); // กำหนดขาทั้งหมดเป็น OUTPUT
  }
}

void loop() {
  // แสดงเลข 0 ถึง 5
  for (int num = 0; num <= 9; num++) {
    displayNumber(num); // เรียกใช้ฟังก์ชันเพื่อแสดงเลข
    delay(1000); // หน่วงเวลา 1 วินาทีก่อนแสดงเลขถัดไป
  }
}

// ฟังก์ชันสำหรับแสดงเลข 0 ถึง 5 บน 7-segment
void displayNumber(int num) {
  // ปิด segment ทั้งหมดก่อน
  for (int i = 0; i < 7; i++) {
    digitalWrite(port[i], LOW); // ปิดทุก segment
  }

  // ใช้ switch-case เพื่อตรวจสอบเลขที่ต้องการแสดง
  switch (num) {
    case 0:
      // แสดงเลข 0
      digitalWrite(A, HIGH);
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(FF, HIGH);
      digitalWrite(G, LOW);
      break;

  }
}
