#include "BacchusHUDElement.h"

void UBacchusHUDElement::OnHUDStateUpdate_Implementation(const FFortHUDState& NewState) {
}

void UBacchusHUDElement::HandleInputMethodChanged(ECommonInputType CurrentInputType) {
}

FGameplayTag UBacchusHUDElement::BP_GetMobileVisualType_Implementation() const {
    return FGameplayTag{};
}

UBacchusHUDElement::UBacchusHUDElement() {
    this->bIsInLayoutMode = false;
    this->bHideWhenNotUsingTouch = false;
    this->bAlwaysShow = false;
    this->OnInBuildMode = EBacchusHUDStateType::DoNothing;
    this->OnInCombatMode = EBacchusHUDStateType::DoNothing;
    this->OnInEditMode = EBacchusHUDStateType::DoNothing;
    this->OnInCreativeMode = EBacchusHUDStateType::DoNothing;
    this->IsFreeFalling = EBacchusHUDStateType::DoNothing;
    this->IsGliding = EBacchusHUDStateType::DoNothing;
    this->CanOpenChute = EBacchusHUDStateType::DoNothing;
    this->InLockedBus = EBacchusHUDStateType::DoNothing;
    this->InUnlockedBus = EBacchusHUDStateType::DoNothing;
    this->OnTargeting = EBacchusHUDStateType::DoNothing;
    this->OnUsingScopeTargeting = EBacchusHUDStateType::DoNothing;
    this->OnCanTarget = EBacchusHUDStateType::DoNothing;
    this->OnCanUseScopeTargeting = EBacchusHUDStateType::DoNothing;
    this->OnCrouching = EBacchusHUDStateType::DoNothing;
    this->OnCanUseSecondaryAbility = EBacchusHUDStateType::DoNothing;
    this->OnDBNO = EBacchusHUDStateType::DoNothing;
    this->OnControllingRCPawn = EBacchusHUDStateType::DoNothing;
    this->OnInVehicle = EBacchusHUDStateType::DoNothing;
    this->OnDrivingVehicle = EBacchusHUDStateType::DoNothing;
}

