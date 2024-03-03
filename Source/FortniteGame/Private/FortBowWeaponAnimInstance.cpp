#include "FortBowWeaponAnimInstance.h"

UFortBowWeaponAnimInstance::UFortBowWeaponAnimInstance() {
    this->ChargeBlendSpaceCrouchSpeed = 1;
    this->ChargePlayRate = 1;
    this->OutOfAmmoAlpha = 1;
    this->BowAimYaw = 1;
    this->BowAimPitch = 1;
    this->OwnerGender = EFortCustomGender::Invalid;
    this->bIsBowCharging = false;
    this->bEnterChargingNormalTransition = false;
    this->bEnterChargingFastTransition = false;
    this->bShouldPlayDefaultPose = false;
    this->bIsBowAtMaxCharge = false;
    this->bIsCrouchMoving = false;
}

