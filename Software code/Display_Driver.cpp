#include "Display_Driver.h"

void WatchEngine::init() {
    Serial.begin(115200);
    pinMode(MOTOR_PIN, OUTPUT);
    Serial.println("Watch Engine Initialized...");
}

void WatchEngine::showBootLogo() {
    Serial.println("Loading Logo onto E-Ink...");
    // Future: Add SPI bitmap data here
}

float WatchEngine::getBattery() {
    int raw = analogRead(BATT_SENSE);
    return (raw / 4095.0) * 4.2; // Convert raw signal to Voltage
}
