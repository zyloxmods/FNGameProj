#include "FortItemLayerAnimInstance_ChargedWeapon.h"

UFortItemLayerAnimInstance_ChargedWeapon::UFortItemLayerAnimInstance_ChargedWeapon() {
    this->ChargeSpeedModifierCurve = NULL;
    this->WeaponChargeLoop = NULL;
    this->ChargeAlpha = 1;
    this->ChargeBlendInTime = 1;
    this->bWeaponIsCharging = false;
    this->bWeaponIsAtMaxCharge = false;
}

