#include "FortFeedbackEvent.h"

FFortFeedbackEvent::FFortFeedbackEvent() {
    this->Instigator = NULL;
    this->Recipient = NULL;
    this->Delay = 0.00f;
    this->bOverriddenQueuing = false;
}

