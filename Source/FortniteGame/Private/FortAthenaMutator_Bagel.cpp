#include "FortAthenaMutator_Bagel.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Bagel::RetrievePlayerFriendsLeaderBoard(AFortPlayerControllerAthena* AthenaPC) {
}

void AFortAthenaMutator_Bagel::ResetStreakScoreMultiplier(AFortPlayerStateAthena* PlayerState) {
}

void AFortAthenaMutator_Bagel::OverrideStormMaterial() {
}

void AFortAthenaMutator_Bagel::OnScoreMultiplierInteractionCompleted(ABuildingActor* SelfActor, AFortPawn* InteractingPawn) {
}

void AFortAthenaMutator_Bagel::OnSafeZoneUpdated() {
}

void AFortAthenaMutator_Bagel::OnRep_TeamScoreMultiplier() {
}

void AFortAthenaMutator_Bagel::OnRep_PlayerData() {
}

void AFortAthenaMutator_Bagel::OnRep_CurrentPhase() {
}

void AFortAthenaMutator_Bagel::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortAthenaMutator_Bagel::HandleRiftSpawned(UFortAIEncounterInfo* Encounter, ABuildingRift* Rift) {
}

void AFortAthenaMutator_Bagel::HandleRiftDying(UFortAIEncounterInfo* Encounter, ABuildingRift* Rift, AController* Controller, AActor* DamageActor) {
}

void AFortAthenaMutator_Bagel::HandleRiftDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortAthenaMutator_Bagel::HandleFinalPhaseAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy) {
}

void AFortAthenaMutator_Bagel::HandleFinalPhaseAIDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortAthenaMutator_Bagel::HandleAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy) {
}

void AFortAthenaMutator_Bagel::HandleAIDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

bool AFortAthenaMutator_Bagel::GetPlayerScore(AFortPlayerControllerAthena* AthenaPC, int32& OutScore) const {
    return false;
}

bool AFortAthenaMutator_Bagel::GetPlayerBestScore(AFortPlayerControllerAthena* AthenaPC, int32& OutStatValue) const {
    return false;
}

void AFortAthenaMutator_Bagel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Bagel, bIsRespawningAllowed);
    DOREPLIFETIME(AFortAthenaMutator_Bagel, TotalObjectiveAreaCount);
    DOREPLIFETIME(AFortAthenaMutator_Bagel, TeamScoreMultiplier);
    DOREPLIFETIME(AFortAthenaMutator_Bagel, PlayerDataArray);
    DOREPLIFETIME(AFortAthenaMutator_Bagel, CurrentPhase);
    DOREPLIFETIME(AFortAthenaMutator_Bagel, FinalBoss);
}

AFortAthenaMutator_Bagel::AFortAthenaMutator_Bagel() {
    this->bOverrideReplicationSettingsDebug = false;
    this->CurrentDifficulty = EBagelDifficulty::Easy;
    this->ObjectiveObjectClass = NULL;
    this->FinalPhaseObjectiveObjectClass = NULL;
    this->SpawnScoreMultiplierTraceStartHeight = 1;
    this->SpawnSscoreMultiplierTraceEndHeight = 1;
    this->DifficultyEncounterSettingsStatic = NULL;
    this->DifficultyEncounterSettingsDynamic = NULL;
    this->DifficultyEncounterSettingsFinalPhase = NULL;
    this->bUseLootTierOverrides = false;
    this->FriendsLeaderboardDisplayedNumber = 0;
    this->TimeSecRetreiveLeaderboardTimeOut = 1;
    this->bIsGameOver = false;
    this->bIsRespawningAllowed = true;
    this->CurrentObjectiveAreaIndex = 0;
    this->TotalObjectiveAreaCount = 0;
    this->CurrentEncounter = NULL;
    this->FinalPhaseEncounter = NULL;
    this->TeamScoreMultiplier = 1;
    this->CurrentPhase = EBagelPhase::NotStarted;
    this->RespawnLocationActor = NULL;
    this->FinalBoss = NULL;
}

