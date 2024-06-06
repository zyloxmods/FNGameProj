#include "FortUINotification.h"

void UFortUINotification::TakeAction() {
}

bool UFortUINotification::ShouldShowNotification() const {
    return false;
}

void UFortUINotification::SetPriority(EFortNotificationPriority InPriority) {
}

void UFortUINotification::NotificationShown_Implementation() {
}

EFortNotificationPriority UFortUINotification::GetPriority() const {
    return EFortNotificationPriority::Vote;
}

TSoftObjectPtr<UObject> UFortUINotification::GetImageOverride() {
    return NULL;
}


void UFortUINotification::ClearNotification_Implementation() {
}

UFortUINotification::UFortUINotification() {
    bHasAction = false;
    NotificationType = EFortNotificationType::Default;
}

