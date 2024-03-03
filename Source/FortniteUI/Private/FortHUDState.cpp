#include "FortHUDState.h"

FFortHUDState::FFortHUDState() {
    this->bInBuildMode = false;
    this->bInCombatMode = false;
    this->bInEditMode = false;
    this->bInCreativeMode = false;
    this->bInBattleLabMode = false;
    this->bIsParachuteOpen = false;
    this->bIsFreeFalling = false;
    this->bInLockedBus = false;
    this->bInUnlockedBus = false;
    this->bOnTargeting = false;
    this->bOnUsingScopeTargeting = false;
    this->bOnCanTarget = false;
    this->bOnCanUseScopeTargeting = false;
    this->bOnCanUseSecondaryAbility = false;
    this->bCanOpenChute = false;
    this->bCrouching = false;
    this->bDBNO = false;
    this->bIsControllingRCPawn = false;
    this->bIsInVehicle = false;
    this->bIsDrivingVehicle = false;
    this->bCanSwapSeats = false;
    this->bIsCarryingDBNO = false;
    this->bIsCarryingHeldObject = false;
    this->bIsZiplining = false;
    this->bIsCreativeFlying = false;
}

