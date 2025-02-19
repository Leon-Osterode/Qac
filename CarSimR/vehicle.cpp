#include "vehicle.h"

Vehicle::Vehicle() : driveSound(nullptr) {}

void Vehicle::setDriveSound(DriveSound* newSound)
{
    if (driveSound) delete driveSound;
    driveSound = newSound;
}

void Vehicle::drive()
{
    if (driveSound) driveSound->drive();
}

/*################################# Twingo #################################*/

Twingo::Twingo() : Vehicle(), vehicleRenderer(new QSvgRenderer(SVG_PATH_TWINGO))
{
    vehicleRenderer->setAspectRatioMode(Qt::KeepAspectRatio);
}

Twingo::~Twingo()
{
    delete vehicleRenderer;
}

void Twingo::draw(QPainter* p)
{
    vehicleRenderer->render(p);
}

/*################################# Truck #################################*/

Truck::Truck() : Vehicle(), vehicleRenderer(new QSvgRenderer(SVG_PATH_TRUCK))
{
    vehicleRenderer->setAspectRatioMode(Qt::KeepAspectRatio);
}

Truck::~Truck()
{
    delete vehicleRenderer;
}

void Truck::draw(QPainter* p)
{
    vehicleRenderer->render(p);
}

/*################################# # #################################*/
