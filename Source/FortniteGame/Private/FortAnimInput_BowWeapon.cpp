#include "FortAnimInput_BowWeapon.h"

FFortAnimInput_BowWeapon::FFortAnimInput_BowWeapon() {
    this->BowChargeSpeedModifierCurve = NULL;
    this->BowAimYaw = 1;
    this->BowAimPitch = 1;
    this->ChargeBlendSpaceCrouchSpeed = 1;
    this->ChargeBlendSpaceCrouchSpeedInterpRate = 1;
    this->ChargeBlendSpaceCrouchSpeedTarget = 1;
    this->ChargePlayRate = 1;
    this->ChargeBlendInTime = 1;
    this->FastChargeThreshold = 1;
    this->ChargeBlendInTimeDefault = 1;
    this->ChargeBlendInTimeFastCharge = 1;
    this->WeaponRaisedAdditiveLeanMultiplier = 1;
    this->bIsBowEquipped = false;
    this->bIsBowCharging = false;
    this->bIsBowAtMaxCharge = false;
    this->bEnableRightHandIK = false;
}

