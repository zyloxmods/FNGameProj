#include "FortQuestTrackerList.h"

void UFortQuestTrackerList::HandleSizeEstimateChanged(UObject* ChangedElement) {
}

void UFortQuestTrackerList::HandleQuestsUpdated() {
}

void UFortQuestTrackerList::HandlePinnedQuestsChanged() {
}

void UFortQuestTrackerList::HandleHUDFinalObjectiveHidden(UFortQuestItem* QuestItem) {
}


UFortQuestTrackerList::UFortQuestTrackerList() {
    this->bConfigureAsHUD = false;
    this->QuestList = NULL;
}

