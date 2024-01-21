#include "WeaponOverheatWidget.h"

void UWeaponOverheatWidget::OnWeaponUnEquipped() {
}

void UWeaponOverheatWidget::OnWeaponEquipped(AFortWeapon* CurrentWeapon, AFortWeapon* PrevWeapon) {
}

void UWeaponOverheatWidget::OnPawnChanged() {
}

UWeaponOverheatWidget::UWeaponOverheatWidget() {
    this->OverheatProgressImage = NULL;
}

