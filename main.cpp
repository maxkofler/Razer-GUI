#include "mainwindow.h"
#include "razer.h"

#include <QApplication>
#include <QComboBox>
#include <QObject>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Razer-Configure");
    QStringList commands{ "Y", "W", "G"};

    Razer razer(&w);
    razer.loadSettings();


    //QObject::connect(w.powerPreset, SIGNAL(&QComboBox::currentIndexChanged(), &razer, &Razer::onPowerPresetChanged);


    QObject::connect(w.powerPreset, SIGNAL(currentIndexChanged(int)), &razer, SLOT(onPowerPresetChanged(int)));

    QObject::connect(w.CPUboost, SIGNAL(valueChanged(int)), &razer, SLOT(onCPUChanged(int)));
    QObject::connect(w.GPUboost, SIGNAL(valueChanged(int)), &razer, SLOT(onGPUChanged(int)));
    QObject::connect(w.powerApply, SIGNAL(clicked()), &razer, SLOT(onPowerApplied()));

    QObject::connect(w.fanPreset, SIGNAL(currentIndexChanged(int)), &razer, SLOT(onFanPresetChanged(int)));
    QObject::connect(w.fanRPM, SIGNAL(sliderMoved(int)), &razer, SLOT(onFanRPMChanged(int)));
    QObject::connect(w.fanApply, SIGNAL(clicked()), &razer, SLOT(onFanApplied()));


    //connect(w.powerPreset, &QComboBox::currentTextChanged, a, &powerChanged);

    w.show();
    return a.exec();
}
