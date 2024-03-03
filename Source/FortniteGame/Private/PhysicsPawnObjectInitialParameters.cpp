#include "PhysicsPawnObjectInitialParameters.h"

FPhysicsPawnObjectInitialParameters::FPhysicsPawnObjectInitialParameters() {
    this->OverrideMassInKG = 1;
    this->OverrideAngularDampening = 1;
    this->OverrideLinearDampening = 1;
    this->PlayerForceMultiplier = 1;
    this->PawnKnockbackMultiplier = 1;
    this->bEnableGravity = false;
    this->bEnableGravityOnHit = false;
    this->bShouldKillPawnOnHit = false;
}

