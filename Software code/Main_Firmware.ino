#include "Display_Driver.h"

WatchEngine watch;

void setup() {
    watch.init();
    watch.showBootLogo();
    
    // Quick vibrate to show it's alive
    digitalWrite(MOTOR_PIN, HIGH);
    delay(100);
    digitalWrite(MOTOR_PIN, LOW);
}

void loop() {
    // Check battery every minute
    float voltage = watch.getBattery();
    Serial.print("Battery Voltage: ");
    Serial.println(voltage);
    
    delay(60000); 
}
