#include "BuildingGameplayActorAbilityDeliveryInfo.h"

FBuildingGameplayActorAbilityDeliveryInfo::FBuildingGameplayActorAbilityDeliveryInfo() {
    this->ProximityPulseInterval = 0.00f;
    this->bHasGEsToApplyOnTouch = false;
    this->bHasGEsToApplyOnPulseTimer = false;
    this->bHasPersistentEffects = false;
    this->OwningActor = NULL;
}

