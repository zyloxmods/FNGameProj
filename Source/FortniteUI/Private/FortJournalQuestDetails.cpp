#include "FortJournalQuestDetails.h"

void UFortJournalQuestDetails::SetCurrentQuest(UFortQuestItem* InCurrentQuest) {
}


void UFortJournalQuestDetails::GetVisibleObjectives(TArray<UFortQuestObjectiveInfo*>& VisibleObjectives) {
}

void UFortJournalQuestDetails::GetRewards(TArray<FFortItemInstanceQuantityPair>& OutRewards, TArray<FFortItemInstanceQuantityPair>& OutSelectableRewards) {
}

void UFortJournalQuestDetails::GetFutureObjectives(TArray<UFortQuestObjectiveInfo*>& FutureObjectives) {
}

EFortTheaterMapTileType UFortJournalQuestDetails::GetActiveMissionTileType() {
    return EFortTheaterMapTileType::Normal;
}

bool UFortJournalQuestDetails::CanPlayQuest() {
    return false;
}

bool UFortJournalQuestDetails::CanPartyLeaderPlayQuest() {
    return false;
}

bool UFortJournalQuestDetails::CanGotoQuest() {
    return false;
}

UFortJournalQuestDetails::UFortJournalQuestDetails() {
    this->CurrentQuest = NULL;
}

