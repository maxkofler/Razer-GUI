#ifndef SETTINGSLOADER_H
#define SETTINGSLOADER_H

#include <string>
#include <fstream>
#include <iostream>

class SettingsLoader
{
public:
    SettingsLoader();

    int getPowerPreset();
    int getCPU();
    int getGPU();

    int getFanPreset();
    int getFanSpeed();

    void setPower(int);
    void setCustomPower(int, int);

    void setFan(int);
};

#endif // SETTINGSLOADER_H
