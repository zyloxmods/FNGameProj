#include "SavedSpectatorCameraShot.h"

FSavedSpectatorCameraShot::FSavedSpectatorCameraShot() {
    this->bIsShotStart = false;
    this->Timestamp = 1;
    this->ShotLength = 1;
    this->NotificationType = ECameraShotNotificationTypes::Notification;
}

