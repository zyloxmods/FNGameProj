#include "FortEventConditional.h"

FFortEventConditional::FFortEventConditional() {
    this->ConditionalType = EFortEventConditionType::EFEC_StatCompare;
    this->RelevantPeriod = EStatRecordingPeriod::Frame;
    this->ComparisonType = EFortCompare::EFC_LessThan;
    this->Value = 0;
    this->Stat = NULL;
    this->FPC = NULL;
}

