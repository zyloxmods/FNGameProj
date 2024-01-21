#include "FortPushCannonAnimInstance.h"

UFortPushCannonAnimInstance::UFortPushCannonAnimInstance() {
    this->bHasDriver = false;
    this->bHasPassenger = false;
    this->bIsCoolDownEnded = false;
    this->bIsCannonFired = false;
    this->PushCannon = NULL;
    this->CooldownEndedOverheatThreshold = 0.00f;
    this->OnFiredOverheatValue = 0.00f;
}

