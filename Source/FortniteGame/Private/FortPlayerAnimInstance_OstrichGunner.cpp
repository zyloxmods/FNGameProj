#include "FortPlayerAnimInstance_OstrichGunner.h"

UFortPlayerAnimInstance_OstrichGunner::UFortPlayerAnimInstance_OstrichGunner() {
    BodyRecoilAlphaValue = 1;
    BodyRecoilAlphaWhenShotgunIsFired = 1;
    BodyRecoilAlphaNoShotgunFired = 1;
    bIsMechShotgunFired = false;
    bIsMechBeginFired = false;
    bIsRocketFiring = false;
}

