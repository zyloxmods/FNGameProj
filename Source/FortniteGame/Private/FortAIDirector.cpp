#include "FortAIDirector.h"

void AFortAIDirector::UnregisterPatrolWard(TScriptInterface<IFortPatrolWardInterface> PatrolWard) {
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
    this->UnreachableLocationPathCost = 500000.00f;
    this->bUsePrototypeEnemies = false;
    this->bForceByPassNavMeshForAISpawning = false;
    this->DespawnAIType = EDespawnAIType::Relevancy;
    this->DespawnDistance = 0.00f;
    this->DespawnInterval = 0.00f;
    this->BurstSpawnThreatVisualsEndDelay = 0.00f;
    this->GuaranteedUpgradeGroupUtilityBonus = 0.10f;
    this->DiscreteEncounterUtilityDesireMappings[0] = 0.00f;
    this->DiscreteEncounterUtilityDesireMappings[1] = 0.00f;
    this->DiscreteEncounterUtilityDesireMappings[2] = 0.00f;
    this->DiscreteEncounterUtilityDesireMappings[3] = 0.00f;
    this->InitialDynamicUtilities[0] = EFortAIUtility::KillPlayersMelee;
    this->InitialDynamicUtilities[1] = EFortAIUtility::KillPlayersMelee;
    this->InitialDynamicUtilities[2] = EFortAIUtility::KillPlayersMelee;
    this->InitialDynamicUtilities[3] = EFortAIUtility::KillPlayersMelee;
    this->DataTrackingSettings = NULL;
    this->bDebugEncounterQueries = false;
    this->bAsyncProcessUpdateAliveAIs = false;
    this->bAllowProcessPlayerTargeting = true;
    this->MaxNumAIProcessPerFrame = 2147483647;
    this->IntensityGraph = NULL;
    this->UtilitiesGraph = NULL;
    this->PIDValuesGraph = NULL;
    this->PIDContributionsGraph = NULL;
    this->bNightActive = false;
    this->bAIDisabled = false;
    this->bRegisteredForDayPhaseChange = false;
    this->bUseSpawnCap = true;
    this->NightCount = 0;
    this->NightEncounterFailureBreatherTime = 15.00f;
    this->EncounterPawnSpawnInterval = 0.20f;
    this->DefaultNightEncounter = NULL;
    this->DummyDebugEncounter = NULL;
    this->BaseEncounterClass = NULL;
    this->MaxActiveAlive = 25;
    this->NumActiveAlive = 0;
    this->NumPendingCapRelevantAI = 0;
    this->MaxAISpawnedPerFrame = 1;
    this->MaxAIDespawnedPerFrame = 1;
    this->DespawnAllAIMaxAIDespawnedPerFrame = 1;
    this->NumWorldSubdivides = 6;
    this->MinAISpawnDistanceFromPlayers = 1000.00f;
    this->ActiveDefaultEncounter = NULL;
    this->ActiveDummyDebugEncounter = NULL;
    this->EQSRenderingComp = NULL;
    this->DebugGraphUpdateFrequency = 1;
    this->MaxNormalLODDistanceToPlayer = 4000.00f;
    this->AIRelevantDistanceToPlayer = 1024.00f;
    this->EncounterRelevantDistanceToPlayer = 2048.00f;
    this->EncounterRelevantDistanceToDefender = 4096.00f;
    this->MaxTotalActiveAliveAI = 0;
    this->MaxEncounterActiveAliveAI = 0;
    this->MaxSPUsed = 0;
    this->bDebugAllowEncounterModifierTags = true;
    this->SimulatedNumberOfPlayersForAIEncounters = -1;
    this->MaxNumberOfEncounterGroups = 20;
}

