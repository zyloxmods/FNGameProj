#include "FortQuestPoolTableRow.h"

FFortQuestPoolTableRow::FFortQuestPoolTableRow() {
    this->RefreshIntervalHours = 0;
    this->LootTier = 0;
    this->RerollLimit = 0;
    this->bGlobalPull = false;
    this->bRollOnActivation = false;
    this->bDeleteActiveOnRefresh = false;
    this->MaxActive = 0;
    this->DaysToKeepClaimed = 0;
    this->DaysToKeepCompleted = 0;
    this->MaxUnclaimed = 0;
}

