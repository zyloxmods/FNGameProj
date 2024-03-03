#include "ClipInfo.h"

FClipInfo::FClipInfo() {
    this->StartTimestamp = 1;
    this->Duration = 1;
    this->CameraType = ESpectatorCameraType::ThirdPerson;
    this->MessageSettings = EClipMessageSettings::DontShow;
    this->MessageNotificationType = ECameraShotNotificationTypes::Notification;
    this->MessageDisplayTime = 1;
}

