#include "FortGameplayCueNotify_Simple.h"


UFortGameplayCueNotify_Simple::UFortGameplayCueNotify_Simple() {
    StartSound = NULL;
    StartParticleSystem = NULL;
    bStayAttached = false;
    bUseHitResult = false;
    bUseWeapon = false;
    bIgnoreRotation = false;
    bUseUnsmoothedNetworkPosition = false;
    PoolingMethod = EPSCPoolMethod::None;
}

