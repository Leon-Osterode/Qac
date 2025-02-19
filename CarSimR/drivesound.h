#ifndef DRIVESOUND_H
#define DRIVESOUND_H

#include <QSoundEffect>

#define LOOP_COUNT 5
#define SOUND_VOLUME 0.25f
#define TWINGO_CAR_SOUND QString("C:/git/Qac/CarSimR/sound/twingo.wav")
#define TRUCK_CAR_SOUND QString("C:/git/Qac/CarSimR/sound/truck.wav")

class DriveSound
{
public:
    DriveSound();
    virtual ~DriveSound();
    virtual void drive() = 0;

protected:
    QSoundEffect* sound;
};

/*################################# Twingo-Sound #################################*/

class TwingoDriveSound : public DriveSound
{
public:
    TwingoDriveSound();
    virtual ~TwingoDriveSound();
    virtual void drive();
};

/*################################# Truck-Sound #################################*/

class TruckDriveSound : public DriveSound
{
public:
    TruckDriveSound();
    virtual ~TruckDriveSound();
    virtual void drive();
};

#endif // DRIVESOUND_H
