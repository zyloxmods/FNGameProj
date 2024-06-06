#include "ClipInfo.h"

FClipInfo::FClipInfo() {
    StartTimestamp = 1;
    Duration = 1;
    CameraType = ESpectatorCameraType::ThirdPerson;
    MessageSettings = EClipMessageSettings::DontShow;
    MessageNotificationType = ECameraShotNotificationTypes::Notification;
    MessageDisplayTime = 1;
}

