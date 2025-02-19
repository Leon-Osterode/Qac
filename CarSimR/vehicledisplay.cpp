#include "vehicledisplay.h"

VehicleDisplay::VehicleDisplay(QWidget *parent) : QWidget(parent), vehicle(nullptr)
{
}

void VehicleDisplay::setVehicle(Vehicle* vh)
{
    vehicle = vh;
    update();
}

void VehicleDisplay::paintEvent(QPaintEvent* event)
{
    if(vehicle == nullptr)
        return;
    QPainter painter(this);
    vehicle->draw(&painter);

}

