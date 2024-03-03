#include "FortPushCannonAnimInstance.h"

UFortPushCannonAnimInstance::UFortPushCannonAnimInstance() {
    this->bHasDriver = false;
    this->bHasPassenger = false;
    this->bIsCoolDownEnded = false;
    this->bIsCannonFired = false;
    this->PushCannon = NULL;
    this->CooldownEndedOverheatThreshold = 1;
    this->OnFiredOverheatValue = 1;
}

