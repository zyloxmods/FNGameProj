#include "FortDecoItemDefinition.h"
#include "Templates/SubclassOf.h"

bool UFortDecoItemDefinition::ShouldUseRelativeCameraRotation() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldSnapYawToHorizontalAxes() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldIgnoreCollisionWithVehicles() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldIgnoreCollisionWithStructuralGridActors() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldIgnoreCollisionWithPlayers() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldIgnoreCollisionWithFortStaticMeshActors() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldIgnoreCollisionWithCriticalActors() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldForceIgnoreOverlapTest() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldForceIgnoreBuildingOverlaps() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldDisableScaleLerpWhilePlacing() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldDisableRotationLerpWhilePlacing() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldDisableLocationLerpWhilePlacing() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldDestroySmallObjectsWhenPlaced() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldConsumeWhenPlaced() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldCancelToolWhenPlaced() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldCancelAbilityOnUnequip() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldAttachWhenPlacing() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldAllowStairsWhenAttachingToFloors() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldAllowPlacementOnWorldGeometry() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldAllowPlacementOnBuildings() const {
    return false;
}

bool UFortDecoItemDefinition::ShouldAllowAnyFloorPlacement() const {
    return false;
}

bool UFortDecoItemDefinition::RequiresPlayerPlaceableAttachmentActors() const {
    return false;
}

bool UFortDecoItemDefinition::RequiresPermissionToEditWorld() const {
    return false;
}

float UFortDecoItemDefinition::GetRotationAngleIncrement() const {
    return 0.0f;
}

TEnumAsByte<EPlacementType::Type> UFortDecoItemDefinition::GetPlacementTypeOverride() const {
    return EPlacementType::Free;
}

TSubclassOf<AFortDecoPreview> UFortDecoItemDefinition::GetPlacementPreviewClass() const {
    return NULL;
}

int32 UFortDecoItemDefinition::GetMaxPlacementDistance() const {
    return 0;
}

float UFortDecoItemDefinition::GetGridSnapSizeOverride() const {
    return 0.0f;
}

float UFortDecoItemDefinition::GetGridPlacementOffset() const {
    return 0.0f;
}

TSubclassOf<ABuildingActor> UFortDecoItemDefinition::GetBlueprintClass() const {
    return NULL;
}

UFortDecoItemDefinition::UFortDecoItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bReplacesEditedSurfaces = false;
    bCanBePlacedOnEnemyBuildings = false;
    GridSnapSizeOverride = 1;
    RotationAngleIncrement = 1;
    GridPlacementOffset = 1;
    PlacementTypeOverride = EPlacementType::None;
    bForceIgnoreOverlapTest = false;
    bIgnoreCollisionWithVehicles = true;
    bForceIgnoreBuildingOverlaps = false;
    bIgnoreCollisionWithCriticalActors = false;
    bIgnoreCollisionWithStructuralGridActors = false;
    bIgnoreCollisionWithFortStaticMeshActors = false;
    bIgnoreCollisionWithPlayers = true;
    bDisableLocationLerpWhilePlacing = true;
    bDisableRotationLerpWhilePlacing = true;
    bDisableScaleLerpWhilePlacing = true;
    bAttachWhenPlacing = true;
    bAllowPlacementOnWorldGeometry = true;
    bAllowPlacementOnBuildings = true;
    bDestroySmallObjectsWhenPlaced = false;
    bSetOwningPlayerForSpawnedDeco = false;
    bSetSpawnedDecoOnPlayerTeam = true;
    bConsumeWhenPlaced = true;
    bCancelToolWhenPlaced = true;
    bCancelAbilityOnUnequip = true;
    bRequiresPlayerPlaceableAttachmentActors = false;
    bUseRelativeCameraRotation = true;
    bAllowStairsWhenAttachingToFloors = false;
    bSnapYawToHorizontalAxes = false;
    bAllowAnyFloorPlacement = false;
    bRequiresPermissionToEditWorld = false;
    bAutoCreateAttachmentBuilding = false;
    AutoCreateAttachmentBuildingResourceType = EFortResourceType::None;
    MaxPlacementDistance = 0;
    bReplacesDecoOnAttachment = false;
    bShowPreviewOnPressHeld = false;
    ItemType = EFortItemType::Deco;
}

