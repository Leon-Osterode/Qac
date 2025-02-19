#ifndef VEHICLE_H
#define VEHICLE_H

#include <QPainter>
#include <QtSvg>
#include "drivesound.h"

#define SVG_PATH_TWINGO QString("C:/git/Qac/CarSimR/SVG/car.svg")
#define SVG_PATH_TRUCK QString("C:/git/Qac/CarSimR/SVG/truck.svg")

class DriveSound;

class Vehicle
{
public:
    Vehicle();
    virtual ~Vehicle() = default;
    virtual void draw(QPainter* p) = 0;
    void setDriveSound(DriveSound* newSound);
    void drive();
protected:
    DriveSound* driveSound;

};

/*################################# Twingo #################################*/

class Twingo : public Vehicle
{
public:
    Twingo();
    virtual ~Twingo();
    virtual void draw(QPainter* p);

private:
    QSvgRenderer* vehicleRenderer;
};

/*################################# Truck #################################*/

class Truck : public Vehicle
{
public:
    Truck();
    virtual ~Truck();
    virtual void draw(QPainter* p);

private:
    QSvgRenderer* vehicleRenderer;
};

#endif // VEHICLE_H
