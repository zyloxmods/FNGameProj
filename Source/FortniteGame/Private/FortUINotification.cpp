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

UTexture2D* UFortUINotification::GetImageOverride_Implementation() {
    return NULL;
}


void UFortUINotification::ClearNotification_Implementation() {
}

UFortUINotification::UFortUINotification() {
    this->bHasAction = false;
    this->NotificationType = EFortNotificationType::Default;
}

