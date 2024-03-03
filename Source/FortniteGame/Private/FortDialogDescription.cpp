#include "FortDialogDescription.h"

FFortDialogDescription::FFortDialogDescription() {
    this->DisplayTime = 1;
    this->AdditionalContent = NULL;
    this->FeedBackType = EFortDialogFeedbackType::FriendRequestSent;
    this->Dismissable = false;
    this->NotificationHandler = NULL;
}

