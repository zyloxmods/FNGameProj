#include "FortBowWeaponAnimInstance.h"

UFortBowWeaponAnimInstance::UFortBowWeaponAnimInstance() {
    this->ChargeBlendSpaceCrouchSpeed = 0.00f;
    this->ChargePlayRate = 0.00f;
    this->OutOfAmmoAlpha = 0.00f;
    this->BowAimYaw = 0.00f;
    this->BowAimPitch = 0.00f;
    this->OwnerGender = EFortCustomGender::Invalid;
    this->bIsBowCharging = false;
    this->bEnterChargingNormalTransition = false;
    this->bEnterChargingFastTransition = false;
    this->bShouldPlayDefaultPose = false;
    this->bIsBowAtMaxCharge = false;
    this->bIsCrouchMoving = false;
}

