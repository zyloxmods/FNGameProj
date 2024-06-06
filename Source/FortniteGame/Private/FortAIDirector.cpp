#include "FortAIDirector.h"

void AFortAIDirector::UnregisterPatrolWard(TScriptInterface<IFortPatrolWardInterface> PatrolWard) {
}

UFortAIEncounterInfo* AFortAIDirector::StartEncounter(FString& EncounterInstigator, UFortDifficultyEncounterSettings* DifficultyEncounterSettings, FFortAIEncounterQueryData OptionalQueryData) {
    return NULL;
}

void AFortAIDirector::RegisterPatrolWard(TScriptInterface<IFortPatrolWardInterface> PatrolWard) {
}











void AFortAIDirector::OnDayPhaseChanged(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation) {
}

bool AFortAIDirector::IsPointTooCloseToPatrolWards(const FVector& Point, const EWardAffectType WardEffectTypeFilter) const {
    return false;
}

bool AFortAIDirector::IsLineTooCloseToPatrolWards(const FVector& LineStart, const FVector& LineEnd) const {
    return false;
}

bool AFortAIDirector::IsAnyEncounterGoalWithinDistanceOfPoint(const FVector& Point, float Distance, bool bOnlyActiveEncounters) const {
    return false;
}

bool AFortAIDirector::IsAnyAIRelevantToPlayer(AFortPlayerPawn* Player) const {
    return false;
}

bool AFortAIDirector::IsAnyActiveEncounterRelevantToPlayer(AFortPlayerPawn* Player) const {
    return false;
}

bool AFortAIDirector::IsAnyActiveEncounterRelevantToDefender(AFortAIPawn* Defender) const {
    return false;
}

FVector AFortAIDirector::GetVectorFromEncounterDirection(TEnumAsByte<EFortEncounterDirection::Type> Direction) {
    return FVector{};
}

TArray<ABuildingRift*> AFortAIDirector::GetRiftsFromClosestActiveEncounterTo(AActor* Target) const {
    return TArray<ABuildingRift*>();
}

int32 AFortAIDirector::GetNumPlayers() const {
    return 0;
}

int32 AFortAIDirector::GetNumActiveEncounters() {
    return 0;
}

TEnumAsByte<EFortEncounterDirection::Type> AFortAIDirector::GetEncounterDirectionFromVector(FVector DirectionVector) {
    return EFortEncounterDirection::North;
}

void AFortAIDirector::GetAmbientThreatEncounterSpawnLocations(TArray<FVector>& AmbientThreatEncounterSpawnLocations) const {
}

void AFortAIDirector::Deactivate() {
}

TArray<TEnumAsByte<EFortEncounterDirection::Type>> AFortAIDirector::ConvertInvalidDirectionsToValidDirections(TArray<TEnumAsByte<EFortEncounterDirection::Type>> InvalidDirections) {
    return TArray<TEnumAsByte<EFortEncounterDirection::Type>>();
}

void AFortAIDirector::Activate() {
}

AFortAIDirector::AFortAIDirector() {
    UnreachableLocationPathCost = 1;
    bUsePrototypeEnemies = false;
    bForceByPassNavMeshForAISpawning = false;
    DespawnAIType = EDespawnAIType::Relevancy;
    DespawnDistance = 1;
    DespawnInterval = 1;
    BurstSpawnThreatVisualsEndDelay = 1;
    GuaranteedUpgradeGroupUtilityBonus = 1;
    DiscreteEncounterUtilityDesireMappings[0] = 1;
    DiscreteEncounterUtilityDesireMappings[1] = 1;
    DiscreteEncounterUtilityDesireMappings[2] = 1;
    DiscreteEncounterUtilityDesireMappings[3] = 1;
    InitialDynamicUtilities[0] = EFortAIUtility::KillPlayersMelee;
    InitialDynamicUtilities[1] = EFortAIUtility::KillPlayersMelee;
    InitialDynamicUtilities[2] = EFortAIUtility::KillPlayersMelee;
    InitialDynamicUtilities[3] = EFortAIUtility::KillPlayersMelee;
    DataTrackingSettings = NULL;
    bDebugEncounterQueries = false;
    bUseLODSettings = false;
    bAsyncProcessUpdateAliveAIs = false;
    bAllowProcessPlayerTargeting = true;
    MaxNumLODAIProcessPerFrame = 0;
    IntensityGraph = NULL;
    UtilitiesGraph = NULL;
    PIDValuesGraph = NULL;
    PIDContributionsGraph = NULL;
    bNightActive = false;
    bAIDisabled = false;
    bRegisteredForDayPhaseChange = false;
    bUseSpawnCap = true;
    NightCount = 0;
    NightEncounterFailureBreatherTime = 1;
    EncounterPawnSpawnInterval = 1;
    DefaultNightEncounter = NULL;
    DummyDebugEncounter = NULL;
    BaseEncounterClass = NULL;
    MaxActiveAlive = 0;
    NumActiveAlive = 0;
    NumPendingCapRelevantAI = 0;
    MaxAISpawnedPerFrame = 0;
    MaxAIDespawnedPerFrame = 0;
    DespawnAllAIMaxAIDespawnedPerFrame = 0;
    NumWorldSubdivides = 0;
    MinAISpawnDistanceFromPlayers = 1;
    ActiveDefaultEncounter = NULL;
    ActiveDummyDebugEncounter = NULL;
    EQSRenderingComp = NULL;
    DebugGraphUpdateFrequency = 0;
    MaxNormalLODDistanceToPlayer = 1;
    AIRelevantDistanceToPlayer = 1;
    EncounterRelevantDistanceToPlayer = 1;
    EncounterRelevantDistanceToDefender = 1;
    MaxTotalActiveAliveAI = 0;
    MaxEncounterActiveAliveAI = 0;
    MaxSPUsed = 0;
    bDebugAllowEncounterModifierTags = true;
    SimulatedNumberOfPlayersForAIEncounters = 0;
    MaxNumberOfEncounterGroups = 0;
}

