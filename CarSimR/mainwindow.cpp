#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), vehicle(nullptr)
{
    setupUi(this);
    displayVehicle = new VehicleDisplay;
    mainLayout->addWidget(displayVehicle);
}

MainWindow::~MainWindow() {}

void MainWindow::on_actionLKW_triggered()
{
    if(!vehicle) delete vehicle;
    vehicle = new Truck;
    displayVehicle->setVehicle(vehicle);
    on_actionLKW_Motor_triggered();
}


void MainWindow::on_actionTwingo_triggered()
{
    if(!vehicle) delete vehicle;
    vehicle = new Twingo;
    displayVehicle->setVehicle(vehicle);
    on_actionTwingo_Motor_triggered();
}


void MainWindow::on_actionTwingo_Motor_triggered()
{
   if (vehicle) vehicle->setDriveSound(new TwingoDriveSound());
}


void MainWindow::on_actionLKW_Motor_triggered()
{
   if (vehicle) vehicle->setDriveSound(new TruckDriveSound());
}


void MainWindow::on_actionFahren_triggered()
{
    vehicle->drive();
}

