#include "FortFeedbackHandle.h"

FFortFeedbackHandle::FFortFeedbackHandle() {
    FeedbackBank = NULL;
    bReadOnly = false;
    bBankDefined = false;
    BroadcastFilterOverride = FFBF_Speaker;
}

