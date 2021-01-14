#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include <QPushButton>
#include <QSpinBox>
#include <QSlider>
#include <QLabel>

#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //CPU profile
    QComboBox*      powerPreset;
    QSpinBox*       CPUboost;
    QSpinBox*       GPUboost;
    QPushButton*    powerApply;

    //Fan profile
    QComboBox*      fanPreset;
    QSlider*        fanRPM;
    QPushButton*    fanApply;
    QLabel*         fanRPMDisplay;

private:
    Ui::MainWindow *ui;

public slots:
    void onRPMSliderMoved(int);

};
#endif // MAINWINDOW_H
