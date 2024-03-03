#include "FortPlayerControllerAthenaXPComponent.h"
#include "Net/UnrealNetwork.h"

void UFortPlayerControllerAthenaXPComponent::QuestObjectiveUpdated(AFortPlayerController* Controller, const UFortQuestItemDefinition* QuestDef, FName BackendName, int32 CompletionCount, bool ObjectiveCompleted, bool QuestCompleted) {
}

void UFortPlayerControllerAthenaXPComponent::OnXpUpdated(int32 InCombatXp, int32 InServivalXp, int32 InBonusMedalXp, int32 InChallengeXp, int32 InMatchXp, int32 InTotalXp) {
}

void UFortPlayerControllerAthenaXPComponent::OnXPEvent(const FXPEventInfo& XPEvent) {
}

void UFortPlayerControllerAthenaXPComponent::OnRep_InMatchProfileVer() {
}

void UFortPlayerControllerAthenaXPComponent::OnRep_HasBRMatchReportCompletedProfileVer() {
}

void UFortPlayerControllerAthenaXPComponent::OnRep_bRegisteredWithQuestManager() {
}

void UFortPlayerControllerAthenaXPComponent::OnProfileUpdated() {
}

void UFortPlayerControllerAthenaXPComponent::OnMatchResultsReported(int64 ProfileRevision) {
}

void UFortPlayerControllerAthenaXPComponent::OnInMatchProfileUpdate(int64 ProfileRevision) {
}

void UFortPlayerControllerAthenaXPComponent::InitRestedXp() {
}

void UFortPlayerControllerAthenaXPComponent::HighPrioXPEvent_Implementation(FXPEventEntry NewHighPrioXPEvent) {
}
bool UFortPlayerControllerAthenaXPComponent::HighPrioXPEvent_Validate(FXPEventEntry NewHighPrioXPEvent) {
    return true;
}

void UFortPlayerControllerAthenaXPComponent::HandlePlayerLevelUp() {
}

void UFortPlayerControllerAthenaXPComponent::ClientQuestsUpdated_Implementation(const TArray<FFortQuestObjectiveCompletion>& PendingQuestChanges) {
}
bool UFortPlayerControllerAthenaXPComponent::ClientQuestsUpdated_Validate(const TArray<FFortQuestObjectiveCompletion>& PendingQuestChanges) {
    return true;
}

void UFortPlayerControllerAthenaXPComponent::ClientMedalsRecived_Implementation(const TArray<FAthenaAccolades>& Medals) {
}
bool UFortPlayerControllerAthenaXPComponent::ClientMedalsRecived_Validate(const TArray<FAthenaAccolades>& Medals) {
    return true;
}

void UFortPlayerControllerAthenaXPComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPlayerControllerAthenaXPComponent, EventArray);
    DOREPLIFETIME(UFortPlayerControllerAthenaXPComponent, RestXP);
    DOREPLIFETIME(UFortPlayerControllerAthenaXPComponent, bRegisteredWithQuestManager);
    DOREPLIFETIME(UFortPlayerControllerAthenaXPComponent, CurrentLevel);
    DOREPLIFETIME(UFortPlayerControllerAthenaXPComponent, TotalXpEarned);
    DOREPLIFETIME(UFortPlayerControllerAthenaXPComponent, MedalBonusXP);
    DOREPLIFETIME(UFortPlayerControllerAthenaXPComponent, SurvivalXp);
    DOREPLIFETIME(UFortPlayerControllerAthenaXPComponent, CombatXp);
    DOREPLIFETIME(UFortPlayerControllerAthenaXPComponent, MatchXp);
    DOREPLIFETIME(UFortPlayerControllerAthenaXPComponent, ChallengeXp);
    DOREPLIFETIME(UFortPlayerControllerAthenaXPComponent, HasBRMatchReportCompletedProfileVer);
    DOREPLIFETIME(UFortPlayerControllerAthenaXPComponent, InMatchProfileVer);
}

UFortPlayerControllerAthenaXPComponent::UFortPlayerControllerAthenaXPComponent() {
    this->RestXP = 0;
    this->bRegisteredWithQuestManager = false;
    this->CachedSeasonDef = NULL;
    this->CachedSeasonMatchXpBoost = 0;
    this->CurrentLevel = 0;
    this->PlayerXp = 0;
    this->TotalXpEarned = 0;
    this->MedalBonusXP = 0;
    this->SurvivalXp = 0;
    this->CombatXp = 0;
    this->MatchXp = 0;
    this->ChallengeXp = 0;
    this->HasBRMatchReportCompletedProfileVer = 0;
    this->InMatchProfileVer = 0;
}

