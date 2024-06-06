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
    SpawnGroupProgressionInfo = NULL;
    BurstSpawnPointsPercentage = 1;
    SpawnPointsMultiplier = 1;
    bUseBreathers = true;
    EncounterTimeSeconds = 1;
    NumFreeUtilities = 0;
    UtilityAdjustmentPeriodSeconds = 1;
    MinSpawnDistance = 1;
    MaxSpawnDistance = 1;
    NumDirections = 0;
    bChangeDirectionsOnRest = false;
    SpawnPointsPercentageLimit = 1;
    PawnNumberLimit = 0;
    SpawningIntervalSeconds = 1;
    PreSpawnRequeryTime = 1;
    NextRiftReplacementTime = 1;
    NextSpawningTime = 1;
    bRequiresReinitializationFromProfile = false;
    IntensitySequenceProgression = NULL;
    AliveMultiplier = 1;
    SpawnLimitType = EFortEncounterSpawnLimitType::NoLimit;
    SpawnLimit = 0;
    PawnNumberLimitProgress = 0;
    SpawnPointsLimitProgress = 0;
    bSpawnLimitReached = false;
    bHasSpawnedAllBurstSpawnAI = false;
    bOverrideAliveCounts = false;
    MinAliveOverride = 0;
    MaxAliveOverride = 0;
    HostilityThreshold = 1;
    PeakTimeSeconds = 1;
    BreatherTimeSeconds = 1;
    MaxRampTimeSeconds = 1;
    MinTimeBetweenBreathesSeconds = 1;
    MaxFadeTimeSeconds = 1;
    FadeEndIntensity = 1;
    FadeEndRemainingSpawnPointsPercentage = 1;
    CompletionPercentageToDisableBreathers = 1;
    bDisplayThreatVisuals = true;
    BaseDesiredUtilities[0] = 1;
    BaseDesiredUtilities[1] = 1;
    BaseDesiredUtilities[2] = 1;
    BaseDesiredUtilities[3] = 1;
    BaseDesiredUtilities[4] = 1;
    BaseDesiredUtilities[5] = 1;
    BaseDesiredUtilities[6] = 1;
    BaseDesiredUtilities[7] = 1;
    BaseDesiredUtilities[8] = 1;
    BaseDesiredUtilities[9] = 1;
    BaseDesiredUtilities[10] = 1;
    BaseDesiredUtilities[11] = 1;
    BaseDesiredUtilities[12] = 1;
    BaseDesiredUtilities[13] = 1;
    BaseDesiredUtilities[14] = 1;
    BaseDesiredUtilities[15] = 1;
    MaxLargeSpawnGroupDiscountInterval = 1;
    MaxSelectionToSpawningDelay = 1;
    UtilityRecentSelectionPenalties[0] = 1;
    UtilityRecentSelectionPenalties[1] = 1;
    UtilityRecentSelectionPenalties[2] = 1;
    UtilityRecentSelectionPenalties[3] = 1;
    UtilityRecentSelectionPenalties[4] = 1;
    UtilityRecentSelectionPenalties[5] = 1;
    UtilityRecentSelectionPenalties[6] = 1;
    UtilityRecentSelectionPenalties[7] = 1;
    UtilityRecentSelectionPenalties[8] = 1;
    UtilityRecentSelectionPenalties[9] = 1;
    UtilityRecentSelectionPenalties[10] = 1;
    UtilityRecentSelectionPenalties[11] = 1;
    UtilityRecentSelectionPenalties[12] = 1;
    UtilityRecentSelectionPenalties[13] = 1;
    UtilityRecentSelectionPenalties[14] = 1;
    UtilityRecentSelectionPenalties[15] = 1;
    UtilityEffectivenessMeasurements[0] = 1;
    UtilityEffectivenessMeasurements[1] = 1;
    UtilityEffectivenessMeasurements[2] = 1;
    UtilityEffectivenessMeasurements[3] = 1;
    UtilityEffectivenessMeasurements[4] = 1;
    UtilityEffectivenessMeasurements[5] = 1;
    UtilityEffectivenessMeasurements[6] = 1;
    UtilityEffectivenessMeasurements[7] = 1;
    UtilityEffectivenessMeasurements[8] = 1;
    UtilityEffectivenessMeasurements[9] = 1;
    UtilityEffectivenessMeasurements[10] = 1;
    UtilityEffectivenessMeasurements[11] = 1;
    UtilityEffectivenessMeasurements[12] = 1;
    UtilityEffectivenessMeasurements[13] = 1;
    UtilityEffectivenessMeasurements[14] = 1;
    UtilityEffectivenessMeasurements[15] = 1;
    UtilityEffectivenessInfluenceCap = 1;
    NumUtilitiesConsidered = 0;
    ReactivityPercentage = 1;
    bAdjustUtilitiesDuringRest = false;
    bDespawnAIsDuringRest = true;
    LastPlayerCombatFactorUpdateTime = 1;
    LastUtilityAdjustTime = 1;
    LastSpawnPointAdjustmentTime = 1;
    LastLargeGroupSpawnTime = 1;
    CurrentSpawnPointsCap = 0;
    CurrentSpawnPointsUsed = 0;
    FailSafeMinSpawnPoints = 0;
    EncounterEngagementDistance = 1;
    MinRelevantBuildingDamagedDistance = 1;
    MaxRelevantBuildingDamagedDistance = 1;
    CurrentGroupSpawnPoint = NULL;
    EncounterState = EFortEncounterState::Uninitialized;
    PacingState = EFortEncounterPacingState::Ramp;
    LastPacingStateTransitionTime = 1;
    DesiredDifficultyLevel = 1;
    DifficultyLevelOverride = 1;
    MyAIDirector = NULL;
    TargetObjective = NULL;
    bOnlyActiveAtNight = true;
    NumRiftsToUse = 0;
    MinRiftsToUse = 0;
    NumRiftsUsed = 0;
    EncounterStartTime = 1;
    HostilityCurveStartTime = 1;
    bNukeWavesAtDaybreak = true;
    bNukeWavesAtEncounterEnd = true;
    bNukeWavesAtEncounterDeactivation = true;
    ActiveEnemyCap = 0;
    CurrentHostilityLevel = 1;
    RiftClassTemplate = NULL;
    RiftManager = NULL;
    AssociatedMissionType = EFortMissionType::Max_None;
    bCanBeActive = false;
    DefaultEncounterAssignmentSettings = NULL;
    MaxActiveAlive = 0;
    MaxSpawnPointsUsed = 0;
    OverrideSpawnPointsCurve = NULL;
    bSendFullAnalyticsReport = true;
    bUseAILifespans = false;
    bTrackCombatParticipation = false;
    AILevelMutator = NULL;
}

