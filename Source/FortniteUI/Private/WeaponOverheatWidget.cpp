#include "WeaponOverheatWidget.h"

void UWeaponOverheatWidget::OnWeaponUnequipped() {
}

void UWeaponOverheatWidget::OnWeaponEquipped(AFortWeapon* CurrentWeapon, AFortWeapon* PrevWeapon) {
}

void UWeaponOverheatWidget::OnPawnChanged() {
}

UWeaponOverheatWidget::UWeaponOverheatWidget() {
    this->OverheatProgressImage = NULL;
}

