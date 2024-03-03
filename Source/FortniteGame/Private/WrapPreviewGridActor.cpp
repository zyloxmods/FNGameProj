#include "WrapPreviewGridActor.h"

void AWrapPreviewGridActor::SetWrap(UAthenaItemWrapDefinition* NewWrap) {
}

AWrapPreviewGridActor::AWrapPreviewGridActor() {
    this->WrapToApply = NULL;
    this->MaterialTypeForRawMeshes = EItemWrapMaterialType::WeaponWrap;
    this->WidthInItems = 0;
    this->bScanForWeapons = false;
    this->bShowRangedWeapons = true;
    this->bShowMeleeWeapons = false;
    this->bExcludePrototypeRangedWeapons = false;
    this->bFilterOutRarityDupesForRangedWeapons = true;
    this->bFilterOutTierDupesForWeapons = false;
    this->bFilterOutCraftingMaterialDupesForWeapons = false;
    this->LockerFilterMode = EWrapPreviewGridLockerMode::IgnoreLockerConfiguration;
    this->bShowOnlyItemsThatDontHaveWrapLockerSlot = false;
    this->bShowWrapMatchIcon = true;
    this->bHasSectionLimit = false;
    this->MaterialSectionMask = 0;
    this->FailedToMatchLockerMarker = NULL;
    this->StatusIconSize = 1;
    this->bStatusIconScreenSizeScaled = true;
}

