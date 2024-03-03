#include "FortCreativeMessageDispatcherErrorMessage.h"

FFortCreativeMessageDispatcherErrorMessage::FFortCreativeMessageDispatcherErrorMessage() {
    this->ErrorMessageType = EMessageDispatcherErrorMessageType::FailedToSetTrigger_TooManyTriggers;
    this->LimitValue = 0;
}

