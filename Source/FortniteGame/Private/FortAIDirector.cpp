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
    this->UnreachableLocationPathCost = 1;
    this->bUsePrototypeEnemies = false;
    this->bForceByPassNavMeshForAISpawning = false;
    this->DespawnAIType = EDespawnAIType::Relevancy;
    this->DespawnDistance = 1;
    this->DespawnInterval = 1;
    this->BurstSpawnThreatVisualsEndDelay = 1;
    this->GuaranteedUpgradeGroupUtilityBonus = 1;
    this->DiscreteEncounterUtilityDesireMappings[0] = 1;
    this->DiscreteEncounterUtilityDesireMappings[1] = 1;
    this->DiscreteEncounterUtilityDesireMappings[2] = 1;
    this->DiscreteEncounterUtilityDesireMappings[3] = 1;
    this->InitialDynamicUtilities[0] = EFortAIUtility::KillPlayersMelee;
    this->InitialDynamicUtilities[1] = EFortAIUtility::KillPlayersMelee;
    this->InitialDynamicUtilities[2] = EFortAIUtility::KillPlayersMelee;
    this->InitialDynamicUtilities[3] = EFortAIUtility::KillPlayersMelee;
    this->DataTrackingSettings = NULL;
    this->bDebugEncounterQueries = false;
    this->bUseLODSettings = false;
    this->bAsyncProcessUpdateAliveAIs = false;
    this->bAllowProcessPlayerTargeting = true;
    this->MaxNumLODAIProcessPerFrame = 0;
    this->IntensityGraph = NULL;
    this->UtilitiesGraph = NULL;
    this->PIDValuesGraph = NULL;
    this->PIDContributionsGraph = NULL;
    this->bNightActive = false;
    this->bAIDisabled = false;
    this->bRegisteredForDayPhaseChange = false;
    this->bUseSpawnCap = true;
    this->NightCount = 0;
    this->NightEncounterFailureBreatherTime = 1;
    this->EncounterPawnSpawnInterval = 1;
    this->DefaultNightEncounter = NULL;
    this->DummyDebugEncounter = NULL;
    this->BaseEncounterClass = NULL;
    this->MaxActiveAlive = 0;
    this->NumActiveAlive = 0;
    this->NumPendingCapRelevantAI = 0;
    this->MaxAISpawnedPerFrame = 0;
    this->MaxAIDespawnedPerFrame = 0;
    this->DespawnAllAIMaxAIDespawnedPerFrame = 0;
    this->NumWorldSubdivides = 0;
    this->MinAISpawnDistanceFromPlayers = 1;
    this->ActiveDefaultEncounter = NULL;
    this->ActiveDummyDebugEncounter = NULL;
    this->EQSRenderingComp = NULL;
    this->DebugGraphUpdateFrequency = 0;
    this->MaxNormalLODDistanceToPlayer = 1;
    this->AIRelevantDistanceToPlayer = 1;
    this->EncounterRelevantDistanceToPlayer = 1;
    this->EncounterRelevantDistanceToDefender = 1;
    this->MaxTotalActiveAliveAI = 0;
    this->MaxEncounterActiveAliveAI = 0;
    this->MaxSPUsed = 0;
    this->bDebugAllowEncounterModifierTags = true;
    this->SimulatedNumberOfPlayersForAIEncounters = 0;
    this->MaxNumberOfEncounterGroups = 0;
}

