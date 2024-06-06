#include "FortEventConditional.h"

FFortEventConditional::FFortEventConditional() {
    ConditionalType = EFortEventConditionType::EFEC_StatCompare;
    RelevantPeriod = EStatRecordingPeriod::Frame;
    ComparisonType = EFortCompare::EFC_LessThan;
    Value = 0;
    Stat = NULL;
    FPC = NULL;
}

