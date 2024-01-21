#include "FortKeepDefenseManager.h"
#include "Templates/SubclassOf.h"

void AFortKeepDefenseManager::StopEvent() {
}

void AFortKeepDefenseManager::StartEventFromList(UFortKeepEventList* EventList, int32 EventNumber) {
}

void AFortKeepDefenseManager::StartEvent(UFortKeepEventInfo* EventTemplate, int32 DifficultyLevelOffset) {
}

UFortAIEncounterInfo* AFortKeepDefenseManager::StartAIEncounter(TSubclassOf<UFortAIEncounterInfo> EncounterTemplate, AActor* TargetActor, UFortAISpawnGroupProgressionInfo* SpawnGroupProgressionInfo, int32 ActivationDelay, int32 EncounterDifficultyLevel, float AliveMultiplier) {
    return NULL;
}

void AFortKeepDefenseManager::SkipWarmup() {
}

void AFortKeepDefenseManager::GoToNextWave() {
}

FText AFortKeepDefenseManager::GetWaveDescription() {
    return FText::GetEmpty();
}

int32 AFortKeepDefenseManager::GetNumberAliveEnemies() {
    return 0;
}

AFortKeepDefenseManager::AFortKeepDefenseManager() {
    this->ActiveAIEncounter = NULL;
    this->ActiveAISpawnGroup = NULL;
}

