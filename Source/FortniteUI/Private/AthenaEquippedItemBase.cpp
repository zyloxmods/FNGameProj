#include "AthenaEquippedItemBase.h"




void UAthenaEquippedItemBase::SetViewModel(UAthenaPlayerViewModel* ViewModel) {
}



void UAthenaEquippedItemBase::OnWorldItemsChanged() {
}

void UAthenaEquippedItemBase::OnWeaponChanged(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon) {
}

void UAthenaEquippedItemBase::OnViewTargetChanged() {
}

void UAthenaEquippedItemBase::OnLocalAmmoChanged(int32 LocalCount, int32 LocalRemaining) {
}

void UAthenaEquippedItemBase::OnBuildingMaterialChanged() {
}




UAthenaEquippedItemBase::UAthenaEquippedItemBase() {
    this->CurrentMode = EEquippedWeaponDisplay::None;
    this->VM = NULL;
}

