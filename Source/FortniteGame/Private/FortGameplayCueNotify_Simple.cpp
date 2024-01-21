#include "FortGameplayCueNotify_Simple.h"


UFortGameplayCueNotify_Simple::UFortGameplayCueNotify_Simple() {
    this->StartSound = NULL;
    this->StartParticleSystem = NULL;
    this->bStayAttached = false;
    this->bUseHitResult = false;
    this->bUseWeapon = false;
    this->bIgnoreRotation = false;
    this->bUseUnsmoothedNetworkPosition = false;
    this->PoolingMethod = EPSCPoolMethod::AutoRelease;
}

