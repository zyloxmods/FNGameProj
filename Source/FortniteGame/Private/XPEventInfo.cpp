#include "XPEventInfo.h"

FXPEventInfo::FXPEventInfo() {
    this->QuestDef = NULL;
    this->Priority = EXPEventPriorityType::NearReticle;
    this->EventXpValue = 0;
    this->TotalXpEarnedInMatch = 0;
    this->RestedValuePortion = 0;
    this->SeasonBoostValuePortion = 0;
    this->RestedXPRemaining = 0;
}

