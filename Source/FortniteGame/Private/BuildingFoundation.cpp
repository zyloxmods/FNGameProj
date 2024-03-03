#include "BuildingFoundation.h"
#include "Net/UnrealNetwork.h"

void ABuildingFoundation::SetDynamicFoundationTransform(const FTransform& NewTransform) {
}

void ABuildingFoundation::SetDynamicFoundationEnabled(bool bEnabled) {
}

void ABuildingFoundation::OnRep_ServerStreamedInLevel() {
}

void ABuildingFoundation::OnRep_LevelToStream() {
}

void ABuildingFoundation::OnRep_DynamicFoundationRepData() {
}

void ABuildingFoundation::OnLevelStreamedIn() {
}

void ABuildingFoundation::OnLevelShown() {
}

bool ABuildingFoundation::EditorOnlyUnloadPreviewLevel() {
    return false;
}

bool ABuildingFoundation::EditorOnlyRemoveAdditionalWorld(FString& LevelToRemove) {
    return false;
}

bool ABuildingFoundation::EditorOnlyLoadPreviewLevel(bool bCreateLevelInstance) {
    return false;
}

TArray<FString> ABuildingFoundation::EditorOnlyGetAdditionalWorlds() {
    return TArray<FString>();
}

void ABuildingFoundation::EditorOnlyExitBatchPreview() {
}

void ABuildingFoundation::EditorOnlyEnterBatchPreview() {
}

void ABuildingFoundation::EditorOnlyClearAdditionalWorlds() {
}

bool ABuildingFoundation::EditorOnlyAddTransformToPreviewLevel(const FTransform& DeltaTransform) {
    return false;
}

void ABuildingFoundation::EditorOnlyAddAdditionalWorld(FString& LevelPackageName) {
}

bool ABuildingFoundation::DoesBuildingFoundationContainActor(AActor* Actor) const {
    return false;
}

void ABuildingFoundation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingFoundation, bServerStreamedInLevel);
    DOREPLIFETIME(ABuildingFoundation, LevelToStream);
    DOREPLIFETIME(ABuildingFoundation, DynamicFoundationRepData);
}

ABuildingFoundation::ABuildingFoundation() {
    this->bConditionalFoundation = false;
    this->bServerStreamedInLevel = false;
    this->bShowHLODWhenDisabled = false;
    this->bOverrideNavigationGraphCells = true;
    this->bHasExcludedZone = false;
    this->bForceDitheringTransition = true;
    this->bStreamingDataBasedBounds = false;
    this->FoundationEnabledState = EDynamicFoundationEnabledState::Unknown;
    this->DynamicFoundationType = EDynamicFoundationType::Static;
    this->FoundationType = BFT_None;
    this->NavExclusionMinX = 0;
    this->NavExclusionMaxX = 0;
    this->NavExclusionMinY = 0;
    this->NavExclusionMaxY = 0;
    this->ParentFoundation = NULL;
    this->ProxyMeshMaxDrawDistanceMultiplier = 1;
    this->LevelStreamInfo = NULL;
}

