#include "FortFocusedBuildingInfo.h"

FFortFocusedBuildingInfo::FFortFocusedBuildingInfo() {
    this->bIsInteractable = false;
    this->bCanBePlayerEdited = false;
    this->HealthDisplayRule = EFortBuildingHealthDisplayRule::Never;
    this->MaxHealth = 1;
    this->bIsAnyTrapAttached = false;
    this->bIsTrapAttachedFacingPlayer = false;
    this->bIsPreviewTrapAttached = false;
    this->AttachedTrapMaxDurability = 1;
    this->InteractionType = EFortBuildingInteraction::None;
    this->InteractionCost = 0;
    this->BuildingMaterial = EFortResourceType::Wood;
    this->bIsPlayerBuilt = false;
}

