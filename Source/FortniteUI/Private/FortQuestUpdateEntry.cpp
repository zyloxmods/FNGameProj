#include "FortQuestUpdateEntry.h"




void UFortQuestUpdateEntry::SetQuestItem(const UFortQuestObjectiveInfo* ObjectiveInfo, bool IsAnnouncement) {
}


int32 UFortQuestUpdateEntry::GetNumDisplayedObjectives() {
    return 0;
}

void UFortQuestUpdateEntry::FinishQuestOutro() {
}

void UFortQuestUpdateEntry::FinishQuestIntro() {
}

void UFortQuestUpdateEntry::CurrentlyDisplayedObjectiveFinished(UFortQuestObjectiveEntry* QuestObjective) {
}

bool UFortQuestUpdateEntry::CanAddObjective(UFortQuestItem* QuestItemToCheck) {
    return false;
}

UFortQuestUpdateEntry::UFortQuestUpdateEntry() {
    this->ObjectivesBox = NULL;
    this->SubEntryClass = NULL;
}

