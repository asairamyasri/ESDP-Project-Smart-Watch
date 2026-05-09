#include "System_Config.h"

void setup() {
  // Start serial communication to talk to the computer
  Serial.begin(115200);
  
  // Set up the motor and a button to test
  pinMode(MOTOR_PIN, OUTPUT);
  pinMode(BUTTON_MENU, INPUT_PULLUP);

  Serial.println("System starting...");
  Serial.println("Checking Vibration Motor...");

  // Make the watch vibrate for a second to show it has power
  digitalWrite(MOTOR_PIN, HIGH);
  delay(500);
  digitalWrite(MOTOR_PIN, LOW);
  
  Serial.println("Initial hardware test complete.");
}

void loop() {
  // Test if the buttons are soldered correctly
  if (digitalRead(BUTTON_MENU) == LOW) {
    Serial.println("Menu Button is working!");
    delay(500); // Wait so it doesn't spam the message
  }
}
