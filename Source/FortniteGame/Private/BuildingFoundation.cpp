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

void ABuildingFoundation::OnRep_FoundationEnabledState() {
}

void ABuildingFoundation::OnRep_DynamicFoundationTransform() {
}

void ABuildingFoundation::OnLevelStreamedIn() {
}

void ABuildingFoundation::OnLevelShown() {
}

bool ABuildingFoundation::EditorOnlyRemoveAdditionalWorld(FString& LevelToRemove) {
    return false;
}

TArray<FString> ABuildingFoundation::EditorOnlyGetAdditionalWorlds() {
    return TArray<FString>();
}

void ABuildingFoundation::EditorOnlyClearAdditionalWorlds() {
}

void ABuildingFoundation::EditorOnlyAddAdditionalWorld(FString& LevelPackageName) {
}

void ABuildingFoundation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingFoundation, bServerStreamedInLevel);
    DOREPLIFETIME(ABuildingFoundation, FoundationEnabledState);
    DOREPLIFETIME(ABuildingFoundation, LevelToStream);
    DOREPLIFETIME(ABuildingFoundation, DynamicFoundationTransform);
}

ABuildingFoundation::ABuildingFoundation() {
    this->bConditionalFoundation = false;
    this->bServerStreamedInLevel = false;
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
    this->LevelStreamInfo = NULL;
}

