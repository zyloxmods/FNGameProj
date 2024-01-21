#include "WrapPreviewGridActor.h"

void AWrapPreviewGridActor::SetWrap(UAthenaItemWrapDefinition* NewWrap) {
}

AWrapPreviewGridActor::AWrapPreviewGridActor() {
    this->WrapToApply = NULL;
    this->MaterialTypeForRawMeshes = EItemWrapMaterialType::VehicleWrap_Opaque;
    this->WidthInItems = 20;
    this->bScanForWeapons = false;
    this->bExcludePrototypeRangedWeapons = false;
    this->bFilterOutRarityDupesForRangedWeapons = true;
    this->LockerFilterMode = EWrapPreviewGridLockerMode::IgnoreLockerConfiguration;
    this->bShowOnlyItemsThatDontHaveWrapLockerSlot = false;
    this->bShowWrapMatchIcon = true;
    this->bHasSectionLimit = false;
    this->MaterialSectionMask = 1;
    this->FailedToMatchLockerMarker = NULL;
    this->StatusIconSize = 0.00f;
    this->bStatusIconScreenSizeScaled = true;
}

