#include "FortAnimInput_BowWeapon.h"

FFortAnimInput_BowWeapon::FFortAnimInput_BowWeapon() {
    BowChargeSpeedModifierCurve = NULL;
    BowAimYaw = 1;
    BowAimPitch = 1;
    ChargeBlendSpaceCrouchSpeed = 1;
    ChargeBlendSpaceCrouchSpeedInterpRate = 1;
    ChargeBlendSpaceCrouchSpeedTarget = 1;
    ChargePlayRate = 1;
    ChargeBlendInTime = 1;
    FastChargeThreshold = 1;
    ChargeBlendInTimeDefault = 1;
    ChargeBlendInTimeFastCharge = 1;
    WeaponRaisedAdditiveLeanMultiplier = 1;
    bIsBowEquipped = false;
    bIsBowCharging = false;
    bIsBowAtMaxCharge = false;
    bEnableRightHandIK = false;
}

