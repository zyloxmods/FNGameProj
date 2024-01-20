#include "FortFeedbackHandle.h"

FFortFeedbackHandle::FFortFeedbackHandle() {
    this->FeedbackBank = NULL;
    this->bReadOnly = false;
    this->bBankDefined = false;
    this->BroadcastFilterOverride = FFBF_Speaker;
}

