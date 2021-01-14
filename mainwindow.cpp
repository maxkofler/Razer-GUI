#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    powerPreset = ui->power_preset;
    CPUboost = ui->power_CPU;
    GPUboost = ui->power_GPU;
    powerApply = ui->power_apply;

    fanPreset = ui->fan_preset;
    fanRPM = ui->fan_rpm;
    fanApply = ui->fan_apply;
    fanRPMDisplay = ui->fan_rpmDisplay;

    connect(fanRPM, &QSlider::sliderMoved, this, &MainWindow::onRPMSliderMoved);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::onRPMSliderMoved(int pos){
    this->fanRPMDisplay->setText(QString().fromStdString(std::to_string(pos*1000)));
}
