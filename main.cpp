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


    QObject::connect(w.powerPreset, SIGNAL(&QComboBox::currentIndexChanged(int)), &razer, SLOT(&Razer::onPowerPresetChanged(int)));

    QObject::connect(w.CPUboost, SIGNAL(&QSpinBox::valueChanged(int)), &razer, SLOT(&Razer::onCPUChanged(int)));
    QObject::connect(w.GPUboost, SIGNAL(&QSpinBox::valueChanged(int)), &razer, SLOT(&Razer::onGPUChanged(int)));
    QObject::connect(w.powerApply, SIGNAL(&QPushButton::clicked()), &razer, SLOT(&Razer::onPowerApplied()));

    QObject::connect(w.fanPreset, SIGNAL(&QComboBox::currentIndexChanged(int)), &razer, SLOT(&Razer::onFanPresetChanged(int)));
    QObject::connect(w.fanRPM, SIGNAL(&QSlider::sliderMoved(int)), &razer, SLOT(&Razer::onFanRPMChanged(int)));
    QObject::connect(w.fanApply, SIGNAL(&QPushButton::clicked()), &razer, SLOT(&Razer::onFanApplied()));


    //connect(w.powerPreset, &QComboBox::currentTextChanged, a, &powerChanged);

    w.show();
    return a.exec();
}
