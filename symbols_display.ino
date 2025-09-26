#include <Arduino_LED_Matrix.h>
ArduinoLEDMatrix matrix;

void setup() {
  matrix.begin();
}

void loop() {
  // --- Sequence 1: Emotions ---
  matrix.loadFrame(LEDMATRIX_EMOJI_HAPPY);
  delay(600);  // longer for clarity
  matrix.loadFrame(LEDMATRIX_HEART_SMALL);
  delay(400);
  matrix.loadFrame(LEDMATRIX_HEART_BIG);
  delay(400);
  matrix.loadFrame(LEDMATRIX_EMOJI_SAD);
  delay(600);
  matrix.loadFrame(LEDMATRIX_LIKE);
  delay(500);

  // --- Sequence 2: Tech / Arduino ---
  matrix.loadFrame(LEDMATRIX_CLOUD_WIFI);
  delay(600);
  matrix.loadFrame(LEDMATRIX_UNO);
  delay(600);
  matrix.loadFrame(LEDMATRIX_RESISTOR);
  delay(500);
  matrix.loadFrame(LEDMATRIX_CHIP);
  delay(600);
  matrix.loadFrame(LEDMATRIX_BOOTLOADER_ON);
  delay(700);  // emphasize bootloader frame

  // --- Sequence 3: Action / Fun ---
  matrix.loadFrame(LEDMATRIX_MUSIC_NOTE);
  delay(500);
  matrix.loadFrame(LEDMATRIX_DANGER);
  delay(600);
  matrix.loadFrame(LEDMATRIX_BLUETOOTH);
  delay(500);
  matrix.loadFrame(LEDMATRIX_LIKE);
  delay(1000);  // long ending frame for Instagram reel

  // Repeat the sequence continuously
}
