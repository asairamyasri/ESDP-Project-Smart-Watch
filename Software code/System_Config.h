#ifndef SYSTEM_CONFIG_H
#define SYSTEM_CONFIG_H

/* * PROJECT: ESP32-S3 Smart Watch
 * MODULE: Hardware Abstraction Layer (HAL) Configuration
 * DESCRIPTION: Defines the physical GPIO mapping for the PCB architecture.
 */

// --- Communication Bus: SPI (E-Ink Display) ---
// Default high-speed FSPI pins for ESP32-S3
#define E_INK_MOSI   48
#define E_INK_SCK    47
#define E_INK_MISO   46
#define E_INK_CS     33
#define E_INK_DC     34
#define E_INK_RST    35
#define E_INK_BUSY   36

// --- Communication Bus: I2C (RTC & Accelerometer) ---
#define SYS_I2C_SDA  12
#define SYS_I2C_SCL  11

// --- User Input Interface ---
#define BTN_MAIN     7  // Action/Menu
#define BTN_BACK     6  // Escape/Back
#define BTN_UP       0  // Navigate Up
#define BTN_DOWN     8  // Navigate Down

// --- System Peripherals ---
#define HAPTIC_PIN   17 // Vibration Motor
#define BATT_SENSE   9  // Battery Voltage ADC
#define USB_DETECT   21 // USB Power Sense

// --- Display Parameters ---
#define SCREEN_RES_X 200
#define SCREEN_RES_Y 200

#endif
