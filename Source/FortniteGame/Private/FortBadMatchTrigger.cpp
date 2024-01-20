#include "FortBadMatchTrigger.h"

FFortBadMatchTrigger::FFortBadMatchTrigger() {
    this->Operation = EFortBadMatchTriggerOperation::LessThan;
    this->Value = 0.00f;
    this->TeamSize = EFortBadMatchTeamSize::Unspecified;
}

