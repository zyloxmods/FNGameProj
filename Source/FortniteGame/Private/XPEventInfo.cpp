#include "XPEventInfo.h"

FXPEventInfo::FXPEventInfo() {
    QuestDef = NULL;
    Priority = EXPEventPriorityType::NearReticle;
    EventXpValue = 0;
    TotalXpEarnedInMatch = 0;
    RestedValuePortion = 0;
    SeasonBoostValuePortion = 0;
    RestedXPRemaining = 0;
}

