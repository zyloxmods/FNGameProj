#include "BuildingGameplayActorAbilityDeliveryInfo.h"

FBuildingGameplayActorAbilityDeliveryInfo::FBuildingGameplayActorAbilityDeliveryInfo() {
    this->bHasGEsToApplyOnTouch = false;
    this->bHasGEsToApplyOnExit = false;
    this->bHasGEsToApplyOnPulseTimer = false;
    this->bHasPersistentEffects = false;
    this->OwningActor = NULL;
}

