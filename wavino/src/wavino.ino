#include "src/ultrasonic_utils.h"
#include "src/servo_utils.h"

const int DISTANCE_THRESHOLD = 20;

void setup() {
  Serial.begin(9600);
  setupUltrasonic(3, 2); 
  setupServo(9);         
  Serial.println("Wavino Robot Hand Initialized");
}

void loop() {
  int distance = getDistance();

  if (distance == -1) {
    Serial.println("⚠ Gagal baca sensor!");
  } else {
    moveServoByDistance(distance, DISTANCE_THRESHOLD);
  }

  delay(100);
}
