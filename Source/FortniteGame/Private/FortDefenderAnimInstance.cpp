#include "FortDefenderAnimInstance.h"

UFortDefenderAnimInstance::UFortDefenderAnimInstance() {
    Gender = EFortCustomGender::Invalid;
    bShouldWalkRightFootForward = false;
    bIsChargingWeapon = false;
    SpeedAdjustedPlayrate = 1;
    AuthoredJogSpeed = 1;
    AuthoredWalkSpeed = 1;
}

