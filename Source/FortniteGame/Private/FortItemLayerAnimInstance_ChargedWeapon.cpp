#include "FortItemLayerAnimInstance_ChargedWeapon.h"

UFortItemLayerAnimInstance_ChargedWeapon::UFortItemLayerAnimInstance_ChargedWeapon() {
    ChargeSpeedModifierCurve = NULL;
    WeaponChargeLoop = NULL;
    ChargeAlpha = 1;
    ChargeBlendInTime = 1;
    bWeaponIsCharging = false;
    bWeaponIsAtMaxCharge = false;
}

