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

UFortDecoItemDefinition::UFortDecoItemDefinition() {
    this->GridSnapSizeOverride = -1.00f;
    this->RotationAngleIncrement = 90.00f;
    this->GridPlacementOffset = 0.00f;
    this->PlacementTypeOverride = EPlacementType::None;
    this->bForceIgnoreOverlapTest = false;
    this->bIgnoreCollisionWithVehicles = true;
    this->bForceIgnoreBuildingOverlaps = false;
    this->bIgnoreCollisionWithCriticalActors = false;
    this->bIgnoreCollisionWithStructuralGridActors = false;
    this->bIgnoreCollisionWithFortStaticMeshActors = false;
    this->bIgnoreCollisionWithPlayers = true;
    this->bDisableLocationLerpWhilePlacing = true;
    this->bDisableRotationLerpWhilePlacing = true;
    this->bDisableScaleLerpWhilePlacing = true;
    this->bAttachWhenPlacing = true;
    this->bAllowPlacementOnWorldGeometry = true;
    this->bAllowPlacementOnBuildings = true;
    this->bDestroySmallObjectsWhenPlaced = false;
    this->bConsumeWhenPlaced = true;
    this->bCancelToolWhenPlaced = true;
    this->bCancelAbilityOnUnequip = true;
    this->bRequiresPlayerPlaceableAttachmentActors = false;
    this->bUseRelativeCameraRotation = true;
    this->bAllowStairsWhenAttachingToFloors = false;
    this->bSnapYawToHorizontalAxes = false;
    this->bAllowAnyFloorPlacement = false;
    this->bRequiresPermissionToEditWorld = false;
    this->bAutoCreateAttachmentBuilding = false;
    this->MaxPlacementDistance = 512;
    ItemType = EFortItemType::Deco;
}

