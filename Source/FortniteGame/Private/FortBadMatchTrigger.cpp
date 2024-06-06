#include "FortBadMatchTrigger.h"

FFortBadMatchTrigger::FFortBadMatchTrigger() {
    Operation = EFortBadMatchTriggerOperation::LessThan;
    Value = 4294967295;
    Type = EFortBadMatchTriggerType::Unspecified;
}

