#include "BuildingStructuralSupportSystem.h"

bool UBuildingStructuralSupportSystem::WouldBuildingBeStructurallySupportedByNeighbors(const ABuildingSMActor* ActorToCheck, const FVector& Location, const FRotator& Rotation, bool bMirrored) const {
    return false;
}

void UBuildingStructuralSupportSystem::StopActorRemovalBatch() {
}

void UBuildingStructuralSupportSystem::StartActorRemovalBatch() {
}

bool UBuildingStructuralSupportSystem::K2_GetWorldLocFromGridIndices(const FBuildingSupportCellIndex& GridIndices, FVector& OutWorldLoc) const {
    return false;
}

void UBuildingStructuralSupportSystem::K2_GetNeighboringBuildingActors(TEnumAsByte<EFortBuildingType::Type> BuildingType, const FVector& WorldLocation, FBuildingSupportCellIndex& OutActorGridIndices, FBuildingNeighboringActorInfo& OutNeighboringActors) const {
}

void UBuildingStructuralSupportSystem::K2_GetNeighboringActorsForWallActor(const FVector& WorldLocation, FBuildingSupportCellIndex& OutActorGridIndices, FBuildingNeighboringActorInfo& OutNeighboringActors) const {
}

void UBuildingStructuralSupportSystem::K2_GetNeighboringActorsForCenterCellActor(const FVector& WorldLocation, FBuildingSupportCellIndex& OutActorGridIndices, FBuildingNeighboringActorInfo& OutNeighboringActors) const {
}

void UBuildingStructuralSupportSystem::K2_GetLogicalBuildingActors(int32 LogicalIdx, TArray<ABuildingSMActor*>& LogicalBuildingActors) {
}

bool UBuildingStructuralSupportSystem::K2_GetGridIndicesFromWorldLoc(const FVector& WorldLoc, FBuildingSupportCellIndex& OutGridIndices) {
    return false;
}

FBox UBuildingStructuralSupportSystem::K2_GetGridBoxFromWorldLoc(const FVector& WorldLocation) const {
    return FBox{};
}

bool UBuildingStructuralSupportSystem::K2_GetBuildingActorsInGridCells(const TArray<FBuildingSupportCellIndex>& CellIndices, const FBuildingGridActorFilter& Filter, FBuildingNeighboringActorInfo& OutActorsInGridCell) {
    return false;
}

bool UBuildingStructuralSupportSystem::K2_GetBuildingActorsInGridCell(const FVector& WorldLocation, const FBuildingGridActorFilter& Filter, FBuildingNeighboringActorInfo& OutActorsInGridCell) {
    return false;
}

TEnumAsByte<EFortStructuralGridQueryResults::Type> UBuildingStructuralSupportSystem::K2_CanAddWallActorToGrid(const FVector& WorldLocation, const FBuildingSupportCellIndex& GridIndices, TEnumAsByte<EFortBuildingType::Type> WallType, EStructuralWallPosition& OutWallPosition, int32& OutWallIdx, TArray<ABuildingActor*>& OutExistingBuildings, bool& OutbSupportedByWorld, bool bAllowStaticOverlap, bool bPerformCollisionChecks) const {
    return EFortStructuralGridQueryResults::CanAdd;
}

TEnumAsByte<EFortStructuralGridQueryResults::Type> UBuildingStructuralSupportSystem::K2_CanAddFloorActorToGrid(const FVector& WorldLocation, const FBuildingSupportCellIndex& GridIndices, TEnumAsByte<EFortBuildingType::Type> FloorType, EStructuralFloorPosition& OutFloorPosition, int32& OutFloorIdx, TArray<ABuildingActor*>& OutExistingBuildings, bool& OutbSupportedByWorld, bool bAllowStaticOverlap, bool bPerformCollisionChecks) const {
    return EFortStructuralGridQueryResults::CanAdd;
}

TEnumAsByte<EFortStructuralGridQueryResults::Type> UBuildingStructuralSupportSystem::K2_CanAddCenterCellActorToGrid(const FVector& WorldLocation, const FBuildingSupportCellIndex& GridIndices, TEnumAsByte<EFortBuildingType::Type> CenterCellType, int32& OutHorizontalGridIdx, TArray<ABuildingActor*>& OutExistingBuildings, bool& OutbStructurallySupported, bool bAllowStaticOverlap, bool bPerformCollisionChecks) const {
    return EFortStructuralGridQueryResults::CanAdd;
}

TEnumAsByte<EFortStructuralGridQueryResults::Type> UBuildingStructuralSupportSystem::K2_CanAddBuildingActorToGrid(UObject* WorldContextObject, const ABuildingSMActor* ActorToCheck, const FVector& Location, const FRotator& Rotation, bool bMirrored, TArray<ABuildingActor*>& ExistingBuildings, EFortBuildPreviewMarkerOptionalAdjustment& MarkerOptionalAdjustment, bool bAllowStaticOverlap) const {
    return EFortStructuralGridQueryResults::CanAdd;
}

bool UBuildingStructuralSupportSystem::IsWorldLocValid(const FVector& WorldLoc) const {
    return false;
}

bool UBuildingStructuralSupportSystem::IsBuildingActorValid(const ABuildingSMActor* ActorToTest) {
    return false;
}

bool UBuildingStructuralSupportSystem::IsBuildingActorStructurallySupported(const ABuildingSMActor* ActorToCheck) const {
    return false;
}

ABuildingSMActor* UBuildingStructuralSupportSystem::GetWallActor(const FBuildingSupportCellIndex& GridIndices, EStructuralWallPosition WallPosition) const {
    return NULL;
}

void UBuildingStructuralSupportSystem::GetLogicalBuildingGroundSupportedActors(int32 LogicalIndex, TArray<ABuildingSMActor*>& LogicalBuildingGroundSupportedActors) {
}

FBox UBuildingStructuralSupportSystem::GetGridBox(const FBuildingSupportCellIndex& CellIndex) const {
    return FBox{};
}

ABuildingSMActor* UBuildingStructuralSupportSystem::GetFloorActor(const FBuildingSupportCellIndex& GridIndices, EStructuralFloorPosition FloorPosition) const {
    return NULL;
}

ABuildingSMActor* UBuildingStructuralSupportSystem::GetCenterCellActor(const FBuildingSupportCellIndex& GridIndices) const {
    return NULL;
}

TEnumAsByte<EFortStructuralGridQueryResults::Type> UBuildingStructuralSupportSystem::CanAddBuildingActorClassToGrid(UObject* WorldContextObject, UClass* BuildingSMActorClassToCheck, const FVector& Location, const FRotator& Rotation, bool bMirrored, TArray<ABuildingActor*>& ExistingBuildings, EFortBuildPreviewMarkerOptionalAdjustment& MarkerOptionalAdjustment, bool bAllowStaticOverlap) const {
    return EFortStructuralGridQueryResults::CanAdd;
}

bool UBuildingStructuralSupportSystem::AreNeighborsConnected(const ABuildingSMActor* NeighborOne, const FVector& NeighborOneLoc, const FRotator& NeighborOneRot, bool bNeighborOneMirrored, const ABuildingSMActor* NeighborTwo, const FVector& NeighborTwoLoc, const FRotator& NeighborTwoRot, bool bNeighborTwoMirrored) const {
    return false;
}

bool UBuildingStructuralSupportSystem::AreNeighboringBuildingActorsConnected(const ABuildingSMActor* NeighborOne, const ABuildingSMActor* NeighborTwo) const {
    return false;
}

bool UBuildingStructuralSupportSystem::AreGridIndicesValid(const FBuildingSupportCellIndex& GridIndices) const {
    return false;
}

UBuildingStructuralSupportSystem::UBuildingStructuralSupportSystem() {
    BatchedRemovalInstigator = NULL;
    NavGraph = NULL;
}

