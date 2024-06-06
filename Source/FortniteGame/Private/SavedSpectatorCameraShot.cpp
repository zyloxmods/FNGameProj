#include "SavedSpectatorCameraShot.h"

FSavedSpectatorCameraShot::FSavedSpectatorCameraShot() {
    bIsShotStart = false;
    Timestamp = 1;
    ShotLength = 1;
    NotificationType = ECameraShotNotificationTypes::Notification;
}

