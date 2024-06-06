#include "FortAthenaMutator_Mash.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Mash::RetrievePlayerFriendsLeaderBoard(AFortPlayerControllerAthena* AthenaPC) {
}

void AFortAthenaMutator_Mash::ResetStreakScoreMultiplier(AFortPlayerStateAthena* PlayerState) {
}

void AFortAthenaMutator_Mash::OverrideStormMaterial() {
}

void AFortAthenaMutator_Mash::OnScoreMultiplierInteractionCompleted(ABuildingActor* SelfActor, AFortPawn* InteractingPawn) {
}

void AFortAthenaMutator_Mash::OnSafeZoneUpdated() {
}

void AFortAthenaMutator_Mash::OnRep_TeamScoreMultiplier() {
}

void AFortAthenaMutator_Mash::OnRep_PlayerData() {
}

void AFortAthenaMutator_Mash::OnRep_CurrentPhase() {
}

void AFortAthenaMutator_Mash::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortAthenaMutator_Mash::HandleRiftSpawned(UFortAIEncounterInfo* Encounter, ABuildingRift* Rift) {
}

void AFortAthenaMutator_Mash::HandleRiftDying(UFortAIEncounterInfo* Encounter, ABuildingRift* Rift, AController* Controller, AActor* DamageActor) {
}

void AFortAthenaMutator_Mash::HandleRiftDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortAthenaMutator_Mash::HandleFinalPhaseAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy) {
}

void AFortAthenaMutator_Mash::HandleFinalPhaseAIDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortAthenaMutator_Mash::HandleAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy) {
}

void AFortAthenaMutator_Mash::HandleAIDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

bool AFortAthenaMutator_Mash::GetPlayerScore(AFortPlayerControllerAthena* AthenaPC, int32& OutScore) const {
    return false;
}

bool AFortAthenaMutator_Mash::GetPlayerBestScore(AFortPlayerControllerAthena* AthenaPC, int32& OutStatValue) const {
    return false;
}

void AFortAthenaMutator_Mash::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Mash, bIsRespawningAllowed);
    DOREPLIFETIME(AFortAthenaMutator_Mash, TotalObjectiveAreaCount);
    DOREPLIFETIME(AFortAthenaMutator_Mash, TeamScoreMultiplier);
    DOREPLIFETIME(AFortAthenaMutator_Mash, PlayerDataArray);
    DOREPLIFETIME(AFortAthenaMutator_Mash, CurrentPhase);
    DOREPLIFETIME(AFortAthenaMutator_Mash, FinalBoss);
}

AFortAthenaMutator_Mash::AFortAthenaMutator_Mash() {
    bOverrideReplicationSettingsDebug = false;
    CurrentDifficulty = EMashDifficulty::Easy;
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
    CurrentPhase = EMashPhase::NotStarted;
    RespawnLocationActor = NULL;
    FinalBoss = NULL;
}

