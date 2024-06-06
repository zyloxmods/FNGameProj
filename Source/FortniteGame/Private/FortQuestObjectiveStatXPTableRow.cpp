#include "FortQuestObjectiveStatXPTableRow.h"

FFortQuestObjectiveStatXPTableRow::FFortQuestObjectiveStatXPTableRow() {
    Type = EFortQuestObjectiveStatEvent::Kill;
    CountThreshhold = 0;
    MaxCount = 0;
    bOnceOnly = false;
    bIsCached = false;
}

