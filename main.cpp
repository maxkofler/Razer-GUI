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

    QObject::connect(w.powerPreset, &QComboBox::currentIndexChanged, &razer, &Razer::onPowerPresetChanged);
    QObject::connect(w.CPUboost, &QSpinBox::valueChanged, &razer, &Razer::onCPUChanged);
    QObject::connect(w.GPUboost, &QSpinBox::valueChanged, &razer, &Razer::onGPUChanged);
    QObject::connect(w.powerApply, &QPushButton::clicked, &razer, &Razer::onPowerApplied);

    QObject::connect(w.fanPreset, &QComboBox::currentIndexChanged, &razer, &Razer::onFanPresetChanged);
    QObject::connect(w.fanRPM, &QSlider::sliderMoved, &razer, &Razer::onFanRPMChanged);
    QObject::connect(w.fanApply, &QPushButton::clicked, &razer, &Razer::onFanApplied);


    //connect(w.powerPreset, &QComboBox::currentTextChanged, a, &powerChanged);

    w.show();
    return a.exec();
}
