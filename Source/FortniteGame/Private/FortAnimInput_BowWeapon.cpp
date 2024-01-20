#include "FortAnimInput_BowWeapon.h"

FFortAnimInput_BowWeapon::FFortAnimInput_BowWeapon() {
    this->BowChargeSpeedModifierCurve = NULL;
    this->BowAimYaw = 0.00f;
    this->BowAimPitch = 0.00f;
    this->ChargeBlendSpaceCrouchSpeed = 0.00f;
    this->ChargeBlendSpaceCrouchSpeedInterpRate = 0.00f;
    this->ChargeBlendSpaceCrouchSpeedTarget = 0.00f;
    this->ChargePlayRate = 0.00f;
    this->ChargeBlendInTime = 0.00f;
    this->FastChargeThreshold = 0.00f;
    this->ChargeBlendInTimeDefault = 0.00f;
    this->ChargeBlendInTimeFastCharge = 0.00f;
    this->WeaponRaisedAdditiveLeanMultiplier = 0.00f;
    this->bIsBowEquipped = false;
    this->bIsBowCharging = false;
    this->bIsBowAtMaxCharge = false;
    this->bEnableRightHandIK = false;
}

