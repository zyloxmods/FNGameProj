#include "FortQuestPoolTableRow.h"

FFortQuestPoolTableRow::FFortQuestPoolTableRow() {
    RefreshIntervalHours = 0;
    LootTier = 0;
    RerollLimit = 0;
    bGlobalPull = false;
    bRollOnActivation = false;
    bDeleteActiveOnRefresh = false;
    MaxActive = 0;
    DaysToKeepClaimed = 0;
    DaysToKeepCompleted = 0;
    MaxUnclaimed = 0;
}

