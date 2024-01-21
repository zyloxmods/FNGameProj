#include "FortUIMessagesPageBase.h"

void UFortUIMessagesPageBase::OnNotificationCleared(UFortUINotification* ClearedMessage) {
}

void UFortUIMessagesPageBase::OnMessageAvailable() {
}

void UFortUIMessagesPageBase::FillMessagesList() {
}

UFortUIMessagesPageBase::UFortUIMessagesPageBase() {
    this->MaximumMessagesShown = 0;
    this->MessagesList = NULL;
}

