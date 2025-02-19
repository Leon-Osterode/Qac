#include "drivesound.h"
#include <QtCore>

DriveSound::DriveSound()
{
    sound = new QSoundEffect();
    sound->setLoopCount(LOOP_COUNT);
    sound->setVolume(SOUND_VOLUME);
}

DriveSound::~DriveSound()
{
    delete sound;
}

/*################################# Twingo-Sound #################################*/

TwingoDriveSound::TwingoDriveSound() : DriveSound()
{
    sound->setSource(QUrl::fromLocalFile(TWINGO_CAR_SOUND));
}

TwingoDriveSound::~TwingoDriveSound() {}

void TwingoDriveSound::drive()
{
    sound->play();
}

/*################################# Truck-Sound #################################*/

TruckDriveSound::TruckDriveSound() : DriveSound()
{
    sound->setSource(QUrl::fromLocalFile(TRUCK_CAR_SOUND));
}

TruckDriveSound::~TruckDriveSound() {}

void TruckDriveSound::drive()
{
    sound->play();
}
