#include "FortFeedbackEvent.h"

FFortFeedbackEvent::FFortFeedbackEvent() {
    this->Instigator = NULL;
    this->Recipient = NULL;
    this->Delay = 1;
    this->bOverriddenQueuing = false;
}

