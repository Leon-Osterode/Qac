#ifndef VEHICLEDISPLAY_H
#define VEHICLEDISPLAY_H

#include <QtWidgets>
#include <QtSvg>
#include "vehicle.h"

class VehicleDisplay : public QWidget
{
    Q_OBJECT
public:
    explicit VehicleDisplay(QWidget *parent = nullptr);


    void setVehicle(Vehicle* vh);

signals:

protected:
    virtual void paintEvent(QPaintEvent* event);

private:
    Vehicle* vehicle;

};

#endif // VEHICLEDISPLAY_H
