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
    this->BurstSpawnPointsPercentage = 0.00f;
    this->SpawnPointsMultiplier = 1.00f;
    this->bUseBreathers = true;
    this->EncounterTimeSeconds = -1.00f;
    this->NumFreeUtilities = 0;
    this->UtilityAdjustmentPeriodSeconds = -1.00f;
    this->MinSpawnDistance = 3000.00f;
    this->MaxSpawnDistance = 7000.00f;
    this->NumDirections = 0;
    this->bChangeDirectionsOnRest = false;
    this->SpawnPointsPercentageLimit = -1.00f;
    this->PawnNumberLimit = -1;
    this->SpawningIntervalSeconds = 10.00f;
    this->PreSpawnRequeryTime = 0.00f;
    this->NextRiftReplacementTime = 340282346638528859811704183484516925440.00f;
    this->NextSpawningTime = -1.00f;
    this->bRequiresReinitializationFromProfile = false;
    this->IntensitySequenceProgression = NULL;
    this->AliveMultiplier = 1.00f;
    this->SpawnLimitType = EFortEncounterSpawnLimitType::NoLimit;
    this->SpawnLimit = 0;
    this->PawnNumberLimitProgress = 0;
    this->SpawnPointsLimitProgress = 0;
    this->bSpawnLimitReached = false;
    this->bHasSpawnedAllBurstSpawnAI = false;
    this->bOverrideAliveCounts = false;
    this->MinAliveOverride = 0;
    this->MaxAliveOverride = 0;
    this->HostilityThreshold = 0.00f;
    this->PeakTimeSeconds = 0.00f;
    this->BreatherTimeSeconds = 30.00f;
    this->MaxRampTimeSeconds = 100.00f;
    this->MinTimeBetweenBreathesSeconds = 15.00f;
    this->MaxFadeTimeSeconds = 60.00f;
    this->FadeEndIntensity = 0.10f;
    this->FadeEndRemainingSpawnPointsPercentage = 0.15f;
    this->CompletionPercentageToDisableBreathers = 1.00f;
    this->bDisplayThreatVisuals = true;
    this->BaseDesiredUtilities[0] = 0.00f;
    this->BaseDesiredUtilities[1] = 0.00f;
    this->BaseDesiredUtilities[2] = 0.00f;
    this->BaseDesiredUtilities[3] = 0.00f;
    this->BaseDesiredUtilities[4] = 0.00f;
    this->BaseDesiredUtilities[5] = 0.00f;
    this->BaseDesiredUtilities[6] = 0.00f;
    this->BaseDesiredUtilities[7] = 0.00f;
    this->BaseDesiredUtilities[8] = 0.00f;
    this->BaseDesiredUtilities[9] = 0.00f;
    this->BaseDesiredUtilities[10] = 0.00f;
    this->BaseDesiredUtilities[11] = 0.00f;
    this->BaseDesiredUtilities[12] = 0.00f;
    this->BaseDesiredUtilities[13] = 0.00f;
    this->BaseDesiredUtilities[14] = 0.00f;
    this->BaseDesiredUtilities[15] = 0.00f;
    this->MaxLargeSpawnGroupDiscountInterval = 30.00f;
    this->MaxSelectionToSpawningDelay = 5.00f;
    this->UtilityRecentSelectionPenalties[0] = 0.00f;
    this->UtilityRecentSelectionPenalties[1] = 0.00f;
    this->UtilityRecentSelectionPenalties[2] = 0.00f;
    this->UtilityRecentSelectionPenalties[3] = 0.00f;
    this->UtilityRecentSelectionPenalties[4] = 0.00f;
    this->UtilityRecentSelectionPenalties[5] = 0.00f;
    this->UtilityRecentSelectionPenalties[6] = 0.00f;
    this->UtilityRecentSelectionPenalties[7] = 0.00f;
    this->UtilityRecentSelectionPenalties[8] = 0.00f;
    this->UtilityRecentSelectionPenalties[9] = 0.00f;
    this->UtilityRecentSelectionPenalties[10] = 0.00f;
    this->UtilityRecentSelectionPenalties[11] = 0.00f;
    this->UtilityRecentSelectionPenalties[12] = 0.00f;
    this->UtilityRecentSelectionPenalties[13] = 0.00f;
    this->UtilityRecentSelectionPenalties[14] = 0.00f;
    this->UtilityRecentSelectionPenalties[15] = 0.00f;
    this->UtilityEffectivenessMeasurements[0] = 0.00f;
    this->UtilityEffectivenessMeasurements[1] = 0.00f;
    this->UtilityEffectivenessMeasurements[2] = 0.00f;
    this->UtilityEffectivenessMeasurements[3] = 0.00f;
    this->UtilityEffectivenessMeasurements[4] = 0.00f;
    this->UtilityEffectivenessMeasurements[5] = 0.00f;
    this->UtilityEffectivenessMeasurements[6] = 0.00f;
    this->UtilityEffectivenessMeasurements[7] = 0.00f;
    this->UtilityEffectivenessMeasurements[8] = 0.00f;
    this->UtilityEffectivenessMeasurements[9] = 0.00f;
    this->UtilityEffectivenessMeasurements[10] = 0.00f;
    this->UtilityEffectivenessMeasurements[11] = 0.00f;
    this->UtilityEffectivenessMeasurements[12] = 0.00f;
    this->UtilityEffectivenessMeasurements[13] = 0.00f;
    this->UtilityEffectivenessMeasurements[14] = 0.00f;
    this->UtilityEffectivenessMeasurements[15] = 0.00f;
    this->UtilityEffectivenessInfluenceCap = 0.00f;
    this->NumUtilitiesConsidered = 1;
    this->ReactivityPercentage = 0.00f;
    this->bAdjustUtilitiesDuringRest = false;
    this->bDespawnAIsDuringRest = true;
    this->LastPlayerCombatFactorUpdateTime = 0.00f;
    this->LastUtilityAdjustTime = -1000.00f;
    this->LastSpawnPointAdjustmentTime = 0.00f;
    this->LastLargeGroupSpawnTime = -1000.00f;
    this->CurrentSpawnPointsCap = 0;
    this->CurrentSpawnPointsUsed = 0;
    this->FailSafeMinSpawnPoints = 0;
    this->EncounterEngagementDistance = 2500.00f;
    this->MinRelevantBuildingDamagedDistance = 750.00f;
    this->MaxRelevantBuildingDamagedDistance = 3000.00f;
    this->CurrentGroupSpawnPoint = NULL;
    this->EncounterState = EFortEncounterState::Uninitialized;
    this->PacingState = EFortEncounterPacingState::Ramp;
    this->LastPacingStateTransitionTime = -1000.00f;
    this->DesiredDifficultyLevel = 0.00f;
    this->DifficultyLevelOverride = -1.00f;
    this->MyAIDirector = NULL;
    this->TargetObjective = NULL;
    this->bOnlyActiveAtNight = true;
    this->NumRiftsToUse = 5;
    this->MinRiftsToUse = 3;
    this->NumRiftsUsed = 0;
    this->EncounterStartTime = 0.00f;
    this->HostilityCurveStartTime = 0.00f;
    this->bNukeWavesAtDaybreak = true;
    this->bNukeWavesAtEncounterEnd = true;
    this->bNukeWavesAtEncounterDeactivation = true;
    this->ActiveEnemyCap = 0;
    this->CurrentHostilityLevel = 0.00f;
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

