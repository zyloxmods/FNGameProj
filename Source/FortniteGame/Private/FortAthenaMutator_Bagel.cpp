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
    bOverrideReplicationSettingsDebug = false;
    CurrentDifficulty = EBagelDifficulty::Easy;
    ObjectiveObjectClass = NULL;
    FinalPhaseObjectiveObjectClass = NULL;
    SpawnScoreMultiplierTraceStartHeight = 1;
    SpawnSscoreMultiplierTraceEndHeight = 1;
    DifficultyEncounterSettingsStatic = NULL;
    DifficultyEncounterSettingsDynamic = NULL;
    DifficultyEncounterSettingsFinalPhase = NULL;
    bUseLootTierOverrides = false;
    FriendsLeaderboardDisplayedNumber = 0;
    TimeSecRetreiveLeaderboardTimeOut = 1;
    bIsGameOver = false;
    bIsRespawningAllowed = true;
    CurrentObjectiveAreaIndex = 0;
    TotalObjectiveAreaCount = 0;
    CurrentEncounter = NULL;
    FinalPhaseEncounter = NULL;
    TeamScoreMultiplier = 1;
    CurrentPhase = EBagelPhase::NotStarted;
    RespawnLocationActor = NULL;
    FinalBoss = NULL;
}

