#include "FortFocusedBuildingInfo.h"

FFortFocusedBuildingInfo::FFortFocusedBuildingInfo() {
    this->bIsInteractable = false;
    this->bCanBePlayerEdited = false;
    this->HealthDisplayRule = EFortBuildingHealthDisplayRule::Never;
    this->MaxHealth = 0.00f;
    this->bIsAnyTrapAttached = false;
    this->bIsTrapAttachedFacingPlayer = false;
    this->bIsPreviewTrapAttached = false;
    this->AttachedTrapMaxDurability = 0.00f;
    this->CurrentLevel = 0;
    this->InteractionType = EFortBuildingInteraction::None;
    this->InteractionCost = 0;
    this->UpgradeBonus = 0;
    this->BuildingMaterial = EFortResourceType::Wood;
    this->bIsHostile = false;
}

