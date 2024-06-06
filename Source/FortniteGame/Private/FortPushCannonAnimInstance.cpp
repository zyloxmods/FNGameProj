#include "FortPushCannonAnimInstance.h"

UFortPushCannonAnimInstance::UFortPushCannonAnimInstance() {
    bHasDriver = false;
    bHasPassenger = false;
    bIsCoolDownEnded = false;
    bIsCannonFired = false;
    PushCannon = NULL;
    CooldownEndedOverheatThreshold = 1;
    OnFiredOverheatValue = 1;
}

