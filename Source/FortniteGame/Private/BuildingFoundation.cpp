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
    bConditionalFoundation = false;
    bServerStreamedInLevel = false;
    bShowHLODWhenDisabled = false;
    bOverrideNavigationGraphCells = true;
    bHasExcludedZone = false;
    bForceDitheringTransition = true;
    bStreamingDataBasedBounds = false;
    FoundationEnabledState = EDynamicFoundationEnabledState::Unknown;
    DynamicFoundationType = EDynamicFoundationType::Static;
    FoundationType = BFT_None;
    NavExclusionMinX = 0;
    NavExclusionMaxX = 0;
    NavExclusionMinY = 0;
    NavExclusionMaxY = 0;
    ParentFoundation = NULL;
    ProxyMeshMaxDrawDistanceMultiplier = 1;
    LevelStreamInfo = NULL;
}

