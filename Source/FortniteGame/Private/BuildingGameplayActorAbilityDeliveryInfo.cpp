#include "BuildingGameplayActorAbilityDeliveryInfo.h"

FBuildingGameplayActorAbilityDeliveryInfo::FBuildingGameplayActorAbilityDeliveryInfo() {
    bHasGEsToApplyOnTouch = false;
    bHasGEsToApplyOnExit = false;
    bHasGEsToApplyOnPulseTimer = false;
    bHasPersistentEffects = false;
    OwningActor = NULL;
}

