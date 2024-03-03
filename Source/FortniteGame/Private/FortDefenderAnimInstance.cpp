#include "FortDefenderAnimInstance.h"

UFortDefenderAnimInstance::UFortDefenderAnimInstance() {
    this->Gender = EFortCustomGender::Invalid;
    this->bShouldWalkRightFootForward = false;
    this->bIsChargingWeapon = false;
    this->SpeedAdjustedPlayrate = 1;
    this->AuthoredJogSpeed = 1;
    this->AuthoredWalkSpeed = 1;
}

