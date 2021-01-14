/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QComboBox *power_preset;
    QLabel *label_power;
    QLabel *label_CPU;
    QSpinBox *power_CPU;
    QSpinBox *power_GPU;
    QLabel *label_GPU;
    QPushButton *power_apply;
    QLabel *fan_label;
    QComboBox *fan_preset;
    QLabel *fan_label_rpm;
    QPushButton *fan_apply;
    QSlider *fan_rpm;
    QLabel *fan_rpmDisplay;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(439, 196);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        power_preset = new QComboBox(centralwidget);
        power_preset->addItem(QString());
        power_preset->addItem(QString());
        power_preset->addItem(QString());
        power_preset->addItem(QString());
        power_preset->setObjectName(QString::fromUtf8("power_preset"));
        power_preset->setGeometry(QRect(10, 30, 101, 26));
        label_power = new QLabel(centralwidget);
        label_power->setObjectName(QString::fromUtf8("label_power"));
        label_power->setGeometry(QRect(10, 10, 101, 18));
        label_power->setAlignment(Qt::AlignCenter);
        label_CPU = new QLabel(centralwidget);
        label_CPU->setObjectName(QString::fromUtf8("label_CPU"));
        label_CPU->setGeometry(QRect(130, 10, 81, 18));
        label_CPU->setAlignment(Qt::AlignCenter);
        power_CPU = new QSpinBox(centralwidget);
        power_CPU->setObjectName(QString::fromUtf8("power_CPU"));
        power_CPU->setGeometry(QRect(131, 30, 81, 27));
        power_CPU->setMaximum(3);
        power_GPU = new QSpinBox(centralwidget);
        power_GPU->setObjectName(QString::fromUtf8("power_GPU"));
        power_GPU->setGeometry(QRect(230, 30, 81, 27));
        power_GPU->setMaximum(2);
        label_GPU = new QLabel(centralwidget);
        label_GPU->setObjectName(QString::fromUtf8("label_GPU"));
        label_GPU->setGeometry(QRect(230, 10, 81, 18));
        label_GPU->setAlignment(Qt::AlignCenter);
        power_apply = new QPushButton(centralwidget);
        power_apply->setObjectName(QString::fromUtf8("power_apply"));
        power_apply->setGeometry(QRect(330, 30, 80, 26));
        fan_label = new QLabel(centralwidget);
        fan_label->setObjectName(QString::fromUtf8("fan_label"));
        fan_label->setGeometry(QRect(10, 80, 101, 20));
        fan_label->setAlignment(Qt::AlignCenter);
        fan_preset = new QComboBox(centralwidget);
        fan_preset->addItem(QString());
        fan_preset->addItem(QString());
        fan_preset->setObjectName(QString::fromUtf8("fan_preset"));
        fan_preset->setGeometry(QRect(10, 100, 101, 26));
        fan_label_rpm = new QLabel(centralwidget);
        fan_label_rpm->setObjectName(QString::fromUtf8("fan_label_rpm"));
        fan_label_rpm->setGeometry(QRect(140, 80, 101, 20));
        fan_label_rpm->setAlignment(Qt::AlignCenter);
        fan_apply = new QPushButton(centralwidget);
        fan_apply->setObjectName(QString::fromUtf8("fan_apply"));
        fan_apply->setGeometry(QRect(330, 100, 80, 26));
        fan_rpm = new QSlider(centralwidget);
        fan_rpm->setObjectName(QString::fromUtf8("fan_rpm"));
        fan_rpm->setGeometry(QRect(140, 110, 160, 16));
        fan_rpm->setMinimum(1);
        fan_rpm->setMaximum(5);
        fan_rpm->setSingleStep(1);
        fan_rpm->setPageStep(1);
        fan_rpm->setTracking(true);
        fan_rpm->setOrientation(Qt::Horizontal);
        fan_rpm->setTickPosition(QSlider::TicksBothSides);
        fan_rpmDisplay = new QLabel(centralwidget);
        fan_rpmDisplay->setObjectName(QString::fromUtf8("fan_rpmDisplay"));
        fan_rpmDisplay->setGeometry(QRect(240, 80, 61, 20));
        fan_rpmDisplay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 439, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        power_preset->setItemText(0, QCoreApplication::translate("MainWindow", "Balanced", nullptr));
        power_preset->setItemText(1, QCoreApplication::translate("MainWindow", "Gaming", nullptr));
        power_preset->setItemText(2, QCoreApplication::translate("MainWindow", "Creative", nullptr));
        power_preset->setItemText(3, QCoreApplication::translate("MainWindow", "Custom", nullptr));

        label_power->setText(QCoreApplication::translate("MainWindow", "Power preset", nullptr));
        label_CPU->setText(QCoreApplication::translate("MainWindow", "CPU boost", nullptr));
        label_GPU->setText(QCoreApplication::translate("MainWindow", "GPU boost", nullptr));
        power_apply->setText(QCoreApplication::translate("MainWindow", "Apply", nullptr));
        fan_label->setText(QCoreApplication::translate("MainWindow", "Fan preset", nullptr));
        fan_preset->setItemText(0, QCoreApplication::translate("MainWindow", "Automatic", nullptr));
        fan_preset->setItemText(1, QCoreApplication::translate("MainWindow", "Manual", nullptr));

        fan_label_rpm->setText(QCoreApplication::translate("MainWindow", "RPM", nullptr));
        fan_apply->setText(QCoreApplication::translate("MainWindow", "Apply", nullptr));
        fan_rpmDisplay->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
