#ifndef RAZER_H
#define RAZER_H

#include <QObject>
#include <string>
#include <iostream>

#include "mainwindow.h"
#include "settingsloader.h"

class Razer : public QObject
{
    Q_OBJECT
public:
    Razer(MainWindow*);

    void loadSettings();
    void loadPowerSettings();
    void loadFanSettings();

public slots:
    void onPowerPresetChanged(int);
    void onCPUChanged(int);
    void onGPUChanged(int);
    void onPowerApplied();

    void onFanPresetChanged(int);
    void onFanRPMChanged(int);
    void onFanApplied();

private:
    MainWindow* mainWindow;
    SettingsLoader* settings;
    int curPowerMode;
    int newPowerMode;
    int curCPU;
    int newCPU;
    int curGPU;
    int newGPU;

    int curFanMode;
    int newFanMode;
    int curFanSpeed;
    int newFanSpeed;

    void configureDependentWidgets();
};

#endif // RAZER_H
