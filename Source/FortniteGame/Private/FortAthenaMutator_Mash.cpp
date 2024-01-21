#include "FortAthenaMutator_Mash.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Mash::ResetDynamicScoreMultiplier() {
}

void AFortAthenaMutator_Mash::OnScoreMultiplierInteractionCompleted(ABuildingActor* SelfActor, AFortPawn* InteractingPawn) {
}

void AFortAthenaMutator_Mash::OnSafeZoneUpdated() {
}

void AFortAthenaMutator_Mash::OnRep_PlayerData() {
}

void AFortAthenaMutator_Mash::OnRep_IsRespawningAllowed() {
}

void AFortAthenaMutator_Mash::OnRep_DynamicScoreMultiplierTotalKillCount() {
}

void AFortAthenaMutator_Mash::OnRep_DynamicScoreMultiplier() {
}

void AFortAthenaMutator_Mash::OnRep_CurrentPhase() {
}

void AFortAthenaMutator_Mash::OnRep_ConstantScoreMultiplier() {
}

void AFortAthenaMutator_Mash::OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3) {
}

void AFortAthenaMutator_Mash::OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortAthenaMutator_Mash::OnFinalBeaconInteractionCompleted(ABuildingActor* SelfActor, AFortPawn* InteractingPawn) {
}

void AFortAthenaMutator_Mash::OnActivateFinalBeaconInteraction() {
}

void AFortAthenaMutator_Mash::IncreaseDynamicScoreMultiplier() {
}

void AFortAthenaMutator_Mash::HandleRiftDying(UFortAIEncounterInfo* Encounter, ABuildingRift* Rift, AController* Controller, AActor* DamageActor) {
}

void AFortAthenaMutator_Mash::HandleAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy) {
}

void AFortAthenaMutator_Mash::HandleAIDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortAthenaMutator_Mash::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Mash, bIsRespawningAllowed);
    DOREPLIFETIME(AFortAthenaMutator_Mash, TotalObjectiveAreaCount);
    DOREPLIFETIME(AFortAthenaMutator_Mash, DynamicScoreMultiplierTotalKillCount);
    DOREPLIFETIME(AFortAthenaMutator_Mash, CurrentDynamicScoreMultiplierTimeWithoutKillReset);
    DOREPLIFETIME(AFortAthenaMutator_Mash, ConstantScoreMultiplier);
    DOREPLIFETIME(AFortAthenaMutator_Mash, DynamicScoreMultiplier);
    DOREPLIFETIME(AFortAthenaMutator_Mash, PlayerDataArray);
    DOREPLIFETIME(AFortAthenaMutator_Mash, CurrentPhase);
}

AFortAthenaMutator_Mash::AFortAthenaMutator_Mash() {
    this->bOverrideReplicationSettingsDebug = false;
    this->bIsUsingSpecialLocationDebug = false;
    this->CurrentDifficulty = EMashDifficulty::Easy;
    this->EncampmentObjectClass = NULL;
    this->BeaconObjectiveClass = NULL;
    this->SpawnScoreMultiplierTraceStartHeight = 20000.00f;
    this->SpawnSscoreMultiplierTraceEndHeight = -5000.00f;
    this->DifficultyEncounterSettingsStatic = NULL;
    this->DifficultyEncounterSettingsDynamic = NULL;
    this->bUseLootTierOverrides = false;
    this->bIsLastObjectiveArea = false;
    this->bIsRespawningAllowed = true;
    this->CurrentObjectiveAreaIndex = 0;
    this->TotalObjectiveAreaCount = 0;
    this->CurrentEncounter = NULL;
    this->DynamicScoreMultiplierTotalKillCount = 0;
    this->CurrentDynamicScoreMultiplierTimeWithoutKillReset = 0.00f;
    this->ConstantScoreMultiplier = 1.00f;
    this->DynamicScoreMultiplier = 1.00f;
    this->bDynamicScoreMultiplierActive = false;
    this->LastAIKillTime = 0.00f;
    this->CurrentPhase = EMashPhase::NotStarted;
}

