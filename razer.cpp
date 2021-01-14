#include "razer.h"

Razer::Razer(MainWindow* window)
{
    this->mainWindow = window;
    this->settings = new SettingsLoader;
}



//
//Power
//
void Razer::onPowerPresetChanged(int m){
    this->newPowerMode = m;

    configureDependentWidgets();
    std::cout << "Mode: " << m << std::endl;
}

void Razer::onCPUChanged(int m){
    newCPU = m;
    std::cout << "CPU=" << m << std::endl;
    configureDependentWidgets();
}

void Razer::onGPUChanged(int m){
    newGPU = m;
    configureDependentWidgets();
}

void Razer::onPowerApplied(){
    curPowerMode = newPowerMode;
    curCPU = newCPU;
    curGPU = newGPU;
    if (curPowerMode != 3){
        settings->setPower(curPowerMode);
    }else{
        settings->setCustomPower(curCPU, curGPU);
    }

    loadPowerSettings();
    configureDependentWidgets();
}




//
//Fan
//

void Razer::onFanPresetChanged(int m){
    newFanMode = m;
    configureDependentWidgets();
}

void Razer::onFanRPMChanged(int m){
    newFanSpeed = m * 1000;
    configureDependentWidgets();
}

void Razer::onFanApplied(){
    curFanMode = newFanMode;
    curFanSpeed = newFanSpeed;
    configureDependentWidgets();
}





void Razer::loadSettings(){
    loadPowerSettings();
    loadFanSettings();
}

void Razer::loadPowerSettings(){
    curPowerMode = settings->getPowerPreset();
    newPowerMode = curPowerMode;
    curCPU = settings->getCPU();
    newCPU = curCPU;
    curGPU = settings->getGPU();
    newGPU = curGPU;

    mainWindow->powerPreset->setCurrentIndex(curPowerMode);
    mainWindow->CPUboost->setValue(curCPU);
    mainWindow->GPUboost->setValue(curGPU);

    configureDependentWidgets();
}

void Razer::loadFanSettings(){
    curFanMode = 0;
    newFanMode = mainWindow->fanPreset->currentIndex();
    curFanSpeed = 1;
    newFanSpeed = mainWindow->fanRPM->value();
    configureDependentWidgets();
}


void Razer::configureDependentWidgets(){
    mainWindow->CPUboost->setEnabled(newPowerMode==3);
    mainWindow->GPUboost->setEnabled(newPowerMode==3);
    mainWindow->powerApply->setEnabled(curPowerMode != newPowerMode || curCPU != newCPU || curGPU != newGPU);

    mainWindow->fanRPM->setEnabled(newFanMode==1);
    mainWindow->fanApply->setEnabled(curFanMode != newFanMode || curFanSpeed != newFanSpeed);
}
