#include "FortMissionManager.h"
#include "Net/UnrealNetwork.h"

bool AFortMissionManager::ShouldShowSecondaryMissionHeaders() const {
    return false;
}

void AFortMissionManager::OnRep_MissionUIActors() {
}

void AFortMissionManager::OnRep_Missions() {
}

void AFortMissionManager::OnRep_EarnedBadgesArray() {
}

void AFortMissionManager::OnRep_CurrentUIFocusedMission() {
}

void AFortMissionManager::OnRep_AllMissionEnemyClasses() {
}

bool AFortMissionManager::GetSpawnLocationActorsThatHaveAddedTagsMatchingQuery(UObject* WorldContextObject, const FGameplayTagQuery& TagQuery, TArray<AActor*>& SpawnLocationActors) {
    return false;
}

bool AFortMissionManager::GetSpawnLocationActorsMatchingEntryItemQuery(UObject* WorldContextObject, const FGameplayTagQuery& TagQuery, TArray<AActor*>& SpawnLocationActors) {
    return false;
}

void AFortMissionManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMissionManager, BluGloManager);
    DOREPLIFETIME(AFortMissionManager, Missions);
    DOREPLIFETIME(AFortMissionManager, AllMissionEnemyClasses);
    DOREPLIFETIME(AFortMissionManager, MissionUIActors);
    DOREPLIFETIME(AFortMissionManager, CurrentUIFocusedMission);
    DOREPLIFETIME(AFortMissionManager, MissionClosestToPar);
    DOREPLIFETIME(AFortMissionManager, EarnedBadgesArray);
}

AFortMissionManager::AFortMissionManager() {
    BluGloManager = NULL;
    CurrentUIFocusedMission = NULL;
    MissionClosestToPar = NULL;
    bDisplaySecondaryMissionHeaders = true;
}

