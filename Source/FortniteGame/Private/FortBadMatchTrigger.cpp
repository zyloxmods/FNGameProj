#include "FortBadMatchTrigger.h"

FFortBadMatchTrigger::FFortBadMatchTrigger() {
    this->Operation = EFortBadMatchTriggerOperation::LessThan;
    this->Value = 4294967295;
    this->Type = EFortBadMatchTriggerType::Unspecified;
}

