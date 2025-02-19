#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include "vehicle.h"
#include "vehicledisplay.h"
#include <QMainWindow>

class MainWindow : public QMainWindow, private Ui::MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    VehicleDisplay* displayVehicle;
    Vehicle* vehicle;
private slots:
    void on_actionLKW_triggered();
    void on_actionTwingo_triggered();
    void on_actionTwingo_Motor_triggered();
    void on_actionLKW_Motor_triggered();
    void on_actionFahren_triggered();
};
#endif // MAINWINDOW_H
