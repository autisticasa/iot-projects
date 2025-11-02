#define ECHO_PIN 2
#define TRIG_PIN 3
#define SERVO_PIN 9

#include <Servo.h>

Servo myServo;

const int DISTANCE_THRESHOLD = 20;  
long duration;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  myServo.attach(SERVO_PIN);
  Serial.begin(9600);
}

void moveServo() {
  int distance = getDistance();

  if (distance > 0 && distance <= DISTANCE_THRESHOLD) {
    int servoPosition = map(distance, 2, DISTANCE_THRESHOLD, 0, 180);
    myServo.write(servoPosition);
  }
}

int getDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH, 30000); 
  if (duration == 0) return -1; 

  int distance = duration * 0.034 / 2;
  return distance;
}

void loop() {
  moveServo();
  delay(50);  
}
