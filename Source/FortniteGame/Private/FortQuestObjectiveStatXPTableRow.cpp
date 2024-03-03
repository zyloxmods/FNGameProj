#include "FortQuestObjectiveStatXPTableRow.h"

FFortQuestObjectiveStatXPTableRow::FFortQuestObjectiveStatXPTableRow() {
    this->Type = EFortQuestObjectiveStatEvent::Kill;
    this->CountThreshhold = 0;
    this->MaxCount = 0;
    this->bOnceOnly = false;
    this->bIsCached = false;
}

