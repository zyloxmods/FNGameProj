#include "LocalNotificationData.h"

FLocalNotificationData::FLocalNotificationData() {
    this->Enable = false;
    this->Type = ELocalNotificationType::SpecificDateTime;
    this->EventType = ELocalNotificationEventType::None;
    this->LocalTime = false;
}

