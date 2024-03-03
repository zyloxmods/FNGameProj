#include "AthenaEquippedItemBase.h"

void UAthenaEquippedItemBase::HandleWorldItemsChanged() {
}

void UAthenaEquippedItemBase::HandleWeaponTargetingChanged(bool bIsTargeting) {
}

void UAthenaEquippedItemBase::HandleWeaponReloadStarted(float ReloadTime, EFortWeaponReloadType ReloadType) {
}

void UAthenaEquippedItemBase::HandleWeaponReloadCancelled() {
}

void UAthenaEquippedItemBase::HandleWeaponOverheatValueChanged(float CurrentValue, float MaxValue, EFortWeaponOverheatState State, bool bIsInCooldown) {
}

void UAthenaEquippedItemBase::HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon) {
}

void UAthenaEquippedItemBase::HandleViewTargetChanged() {
}

void UAthenaEquippedItemBase::HandleLocalAmmoChanged(int32 LocalCount, int32 LocalRemaining) {
}

void UAthenaEquippedItemBase::HandleBuildingMaterialChanged() {
}












UAthenaEquippedItemBase::UAthenaEquippedItemBase() {
    this->CurrentMode = EEquippedWeaponDisplay::None;
    this->AmountConsideredInfinite = 0;
    this->Switcher_Content = NULL;
    this->Panel_ResourceContent = NULL;
    this->Panel_AmmoContent = NULL;
    this->Panel_UtilityContent = NULL;
    this->Image_AmmoIcon = NULL;
    this->Image_ResourceIcon = NULL;
    this->Image_UtilityIcon = NULL;
    this->Text_MagazineAmmoCount = NULL;
    this->Text_SurplusAmmoCount = NULL;
    this->Text_ResourceCount = NULL;
    this->Text_UtilityAmmoCount = NULL;
    this->Text_OutOfAmmo = NULL;
    this->WeaponEquipVisibility = ESlateVisibility::Visible;
}

