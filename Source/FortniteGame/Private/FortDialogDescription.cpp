#include "FortDialogDescription.h"

FFortDialogDescription::FFortDialogDescription() {
    DisplayTime = 1;
    AdditionalContent = NULL;
    FeedBackType = EFortDialogFeedbackType::FriendRequestSent;
    Dismissable = false;
    NotificationHandler = NULL;
}

