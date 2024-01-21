#include "FortEventConditional.h"

FFortEventConditional::FFortEventConditional() {
    this->ConditionalType = EFortEventConditionType::EFEC_StatCompare;
    this->RelevantPeriod = EStatRecordingPeriod::Minute;
    this->ComparisonType = EFortCompare::EFC_LessThan;
    this->Value = 0;
    this->CraftingItem = NULL;
    this->bCanCraft = false;
    this->Stat = NULL;
    this->FPC = NULL;
}

