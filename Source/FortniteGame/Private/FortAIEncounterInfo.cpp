#include "FortAIEncounterInfo.h"

void UFortAIEncounterInfo::UnRegisterAISpawner(AActor* InAISpawner) {
}

void UFortAIEncounterInfo::SpawnTestAIGroup(const UFortAISpawnGroup* SpawnGroupToSpawn, FVector SpawnLocation, FRotator SpawnRotation, AActor* SpawnSource, const TArray<UFortAbilitySet*> AbilitySetsToGrantOnSpawn, FFortAISpawnGroupUpgradeData UpgradeData, bool bAllowAssigningToExternalSpawners, float SecondsBetweenSpawns) {
}

AFortAIPawn* UFortAIEncounterInfo::SpawnAIPawnReservedForEnemySpawner(AActor* EnemySpawner, FVector SpawnLocation, FRotator SpawnRotation) {
    return NULL;
}

void UFortAIEncounterInfo::SetPawnNumberLimit(int32 InPawnNumberLimit) {
}

void UFortAIEncounterInfo::SetNukeWavesAtEncounterEnd(bool bNuke) {
}

void UFortAIEncounterInfo::SetEncounterActivationState(bool bEncounterActivityState) {
}

void UFortAIEncounterInfo::RequestActivation(int32 ActivationDelay) {
}

void UFortAIEncounterInfo::RegisterAISpawner(AActor* InAISpawner) {
}




void UFortAIEncounterInfo::OnGoalTakeDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void UFortAIEncounterInfo::OnGameDifficultyChanged() {
}


void UFortAIEncounterInfo::OnEncounterPawnDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void UFortAIEncounterInfo::NotifyRiftDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

bool UFortAIEncounterInfo::GroupHasAIRemainingToSpawn(const FFortAISpawnerData& FortAISpawnerData) {
    return false;
}

int32 UFortAIEncounterInfo::GetPawnNumberLimit() const {
    return 0;
}

float UFortAIEncounterInfo::GetEncounterTimeSeconds() {
    return 0.0f;
}

void UFortAIEncounterInfo::GetEncounterRifts(TArray<ABuildingRift*>& OutRifts) const {
}

AActor* UFortAIEncounterInfo::GetEncounterQueryActor() const {
    return NULL;
}

void UFortAIEncounterInfo::GetEncounterGameplayTags(FGameplayTagContainer& OutEncounterTags) const {
}

AFortAIDirectorDataManager* UFortAIEncounterInfo::GetEncounterDataManager() {
    return NULL;
}

void UFortAIEncounterInfo::GetEncounterAssignmentGoalActors(TArray<AActor*>& OutGoalActors) const {
}

bool UFortAIEncounterInfo::GetCurrentSpawnAreaDirections(TArray<TEnumAsByte<EFortEncounterDirection::Type>>& OutDirections) const {
    return false;
}

bool UFortAIEncounterInfo::EncounterHasReservedSpawnRequestForEnemySpawner(AActor* EnemySpawner) const {
    return false;
}

UFortAIAssignment* UFortAIEncounterInfo::CreateEncounterAssignment(UFortAIAssignmentSettings* AssignmentSettings, AActor* GoalActor) {
    return NULL;
}

UFortAIEncounterInfo::UFortAIEncounterInfo() {
    this->SpawnGroupProgressionInfo = NULL;
    this->BurstSpawnPointsPercentage = 1;
    this->SpawnPointsMultiplier = 1;
    this->bUseBreathers = true;
    this->EncounterTimeSeconds = 1;
    this->NumFreeUtilities = 0;
    this->UtilityAdjustmentPeriodSeconds = 1;
    this->MinSpawnDistance = 1;
    this->MaxSpawnDistance = 1;
    this->NumDirections = 0;
    this->bChangeDirectionsOnRest = false;
    this->SpawnPointsPercentageLimit = 1;
    this->PawnNumberLimit = 0;
    this->SpawningIntervalSeconds = 1;
    this->PreSpawnRequeryTime = 1;
    this->NextRiftReplacementTime = 1;
    this->NextSpawningTime = 1;
    this->bRequiresReinitializationFromProfile = false;
    this->IntensitySequenceProgression = NULL;
    this->AliveMultiplier = 1;
    this->SpawnLimitType = EFortEncounterSpawnLimitType::NoLimit;
    this->SpawnLimit = 0;
    this->PawnNumberLimitProgress = 0;
    this->SpawnPointsLimitProgress = 0;
    this->bSpawnLimitReached = false;
    this->bHasSpawnedAllBurstSpawnAI = false;
    this->bOverrideAliveCounts = false;
    this->MinAliveOverride = 0;
    this->MaxAliveOverride = 0;
    this->HostilityThreshold = 1;
    this->PeakTimeSeconds = 1;
    this->BreatherTimeSeconds = 1;
    this->MaxRampTimeSeconds = 1;
    this->MinTimeBetweenBreathesSeconds = 1;
    this->MaxFadeTimeSeconds = 1;
    this->FadeEndIntensity = 1;
    this->FadeEndRemainingSpawnPointsPercentage = 1;
    this->CompletionPercentageToDisableBreathers = 1;
    this->bDisplayThreatVisuals = true;
    this->BaseDesiredUtilities[0] = 1;
    this->BaseDesiredUtilities[1] = 1;
    this->BaseDesiredUtilities[2] = 1;
    this->BaseDesiredUtilities[3] = 1;
    this->BaseDesiredUtilities[4] = 1;
    this->BaseDesiredUtilities[5] = 1;
    this->BaseDesiredUtilities[6] = 1;
    this->BaseDesiredUtilities[7] = 1;
    this->BaseDesiredUtilities[8] = 1;
    this->BaseDesiredUtilities[9] = 1;
    this->BaseDesiredUtilities[10] = 1;
    this->BaseDesiredUtilities[11] = 1;
    this->BaseDesiredUtilities[12] = 1;
    this->BaseDesiredUtilities[13] = 1;
    this->BaseDesiredUtilities[14] = 1;
    this->BaseDesiredUtilities[15] = 1;
    this->MaxLargeSpawnGroupDiscountInterval = 1;
    this->MaxSelectionToSpawningDelay = 1;
    this->UtilityRecentSelectionPenalties[0] = 1;
    this->UtilityRecentSelectionPenalties[1] = 1;
    this->UtilityRecentSelectionPenalties[2] = 1;
    this->UtilityRecentSelectionPenalties[3] = 1;
    this->UtilityRecentSelectionPenalties[4] = 1;
    this->UtilityRecentSelectionPenalties[5] = 1;
    this->UtilityRecentSelectionPenalties[6] = 1;
    this->UtilityRecentSelectionPenalties[7] = 1;
    this->UtilityRecentSelectionPenalties[8] = 1;
    this->UtilityRecentSelectionPenalties[9] = 1;
    this->UtilityRecentSelectionPenalties[10] = 1;
    this->UtilityRecentSelectionPenalties[11] = 1;
    this->UtilityRecentSelectionPenalties[12] = 1;
    this->UtilityRecentSelectionPenalties[13] = 1;
    this->UtilityRecentSelectionPenalties[14] = 1;
    this->UtilityRecentSelectionPenalties[15] = 1;
    this->UtilityEffectivenessMeasurements[0] = 1;
    this->UtilityEffectivenessMeasurements[1] = 1;
    this->UtilityEffectivenessMeasurements[2] = 1;
    this->UtilityEffectivenessMeasurements[3] = 1;
    this->UtilityEffectivenessMeasurements[4] = 1;
    this->UtilityEffectivenessMeasurements[5] = 1;
    this->UtilityEffectivenessMeasurements[6] = 1;
    this->UtilityEffectivenessMeasurements[7] = 1;
    this->UtilityEffectivenessMeasurements[8] = 1;
    this->UtilityEffectivenessMeasurements[9] = 1;
    this->UtilityEffectivenessMeasurements[10] = 1;
    this->UtilityEffectivenessMeasurements[11] = 1;
    this->UtilityEffectivenessMeasurements[12] = 1;
    this->UtilityEffectivenessMeasurements[13] = 1;
    this->UtilityEffectivenessMeasurements[14] = 1;
    this->UtilityEffectivenessMeasurements[15] = 1;
    this->UtilityEffectivenessInfluenceCap = 1;
    this->NumUtilitiesConsidered = 0;
    this->ReactivityPercentage = 1;
    this->bAdjustUtilitiesDuringRest = false;
    this->bDespawnAIsDuringRest = true;
    this->LastPlayerCombatFactorUpdateTime = 1;
    this->LastUtilityAdjustTime = 1;
    this->LastSpawnPointAdjustmentTime = 1;
    this->LastLargeGroupSpawnTime = 1;
    this->CurrentSpawnPointsCap = 0;
    this->CurrentSpawnPointsUsed = 0;
    this->FailSafeMinSpawnPoints = 0;
    this->EncounterEngagementDistance = 1;
    this->MinRelevantBuildingDamagedDistance = 1;
    this->MaxRelevantBuildingDamagedDistance = 1;
    this->CurrentGroupSpawnPoint = NULL;
    this->EncounterState = EFortEncounterState::Uninitialized;
    this->PacingState = EFortEncounterPacingState::Ramp;
    this->LastPacingStateTransitionTime = 1;
    this->DesiredDifficultyLevel = 1;
    this->DifficultyLevelOverride = 1;
    this->MyAIDirector = NULL;
    this->TargetObjective = NULL;
    this->bOnlyActiveAtNight = true;
    this->NumRiftsToUse = 0;
    this->MinRiftsToUse = 0;
    this->NumRiftsUsed = 0;
    this->EncounterStartTime = 1;
    this->HostilityCurveStartTime = 1;
    this->bNukeWavesAtDaybreak = true;
    this->bNukeWavesAtEncounterEnd = true;
    this->bNukeWavesAtEncounterDeactivation = true;
    this->ActiveEnemyCap = 0;
    this->CurrentHostilityLevel = 1;
    this->RiftClassTemplate = NULL;
    this->RiftManager = NULL;
    this->AssociatedMissionType = EFortMissionType::Max_None;
    this->bCanBeActive = false;
    this->DefaultEncounterAssignmentSettings = NULL;
    this->MaxActiveAlive = 0;
    this->MaxSpawnPointsUsed = 0;
    this->OverrideSpawnPointsCurve = NULL;
    this->bSendFullAnalyticsReport = true;
    this->bUseAILifespans = false;
    this->bTrackCombatParticipation = false;
    this->AILevelMutator = NULL;
}

