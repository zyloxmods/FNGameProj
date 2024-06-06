#include "FortBowWeaponAnimInstance.h"

UFortBowWeaponAnimInstance::UFortBowWeaponAnimInstance() {
    ChargeBlendSpaceCrouchSpeed = 1;
    ChargePlayRate = 1;
    OutOfAmmoAlpha = 1;
    BowAimYaw = 1;
    BowAimPitch = 1;
    OwnerGender = EFortCustomGender::Invalid;
    bIsBowCharging = false;
    bEnterChargingNormalTransition = false;
    bEnterChargingFastTransition = false;
    bShouldPlayDefaultPose = false;
    bIsBowAtMaxCharge = false;
    bIsCrouchMoving = false;
}

