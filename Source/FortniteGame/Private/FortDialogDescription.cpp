#include "FortDialogDescription.h"

FFortDialogDescription::FFortDialogDescription() {
    this->DisplayTime = 0.00f;
    this->AdditionalContent = NULL;
    this->FeedBackType = EFortDialogFeedbackType::FriendRequestSent;
    this->Dismissable = false;
    this->NotificationHandler = NULL;
}

