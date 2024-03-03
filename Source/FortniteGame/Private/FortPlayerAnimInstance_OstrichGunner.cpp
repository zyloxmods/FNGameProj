#include "FortPlayerAnimInstance_OstrichGunner.h"

UFortPlayerAnimInstance_OstrichGunner::UFortPlayerAnimInstance_OstrichGunner() {
    this->BodyRecoilAlphaValue = 1;
    this->BodyRecoilAlphaWhenShotgunIsFired = 1;
    this->BodyRecoilAlphaNoShotgunFired = 1;
    this->bIsMechShotgunFired = false;
    this->bIsMechBeginFired = false;
    this->bIsRocketFiring = false;
}

