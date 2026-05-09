#ifndef DISPLAY_DRIVER_H
#define DISPLAY_DRIVER_H

#include <Arduino.h>
#include "System_Config.h"

class WatchEngine {
  public:
    void init();
    void updateScreen();
    void showBootLogo();
    float getBattery();
};

#endif
