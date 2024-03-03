#include "FortQuestTrackerEntry.h"


void UFortQuestTrackerEntry::HandleHUDObjectiveCompletion(UFortQuestObjectiveInfo* QuestObjective) {
}

UFortQuestTrackerEntry::UFortQuestTrackerEntry() {
    this->QuestNameText = NULL;
    this->ObjectivesList = NULL;
    this->TrackedQuest = NULL;
    this->bConfigureAsHUD = false;
}

