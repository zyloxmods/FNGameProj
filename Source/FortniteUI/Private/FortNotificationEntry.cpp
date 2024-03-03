#include "FortNotificationEntry.h"



void UFortNotificationEntry::NativeStartNotificationOutro() {
}

void UFortNotificationEntry::FinishNotificationOutro() {
}

void UFortNotificationEntry::FinishNotificationIntro() {
}


UFortNotificationEntry::UFortNotificationEntry() {
    this->DisplayTime = 1;
    this->MinDisplayTime = 1;
    this->bRushDisplay = false;
    this->RushWidgetThreshold = 0;
    this->LinkedNotification = NULL;
}

