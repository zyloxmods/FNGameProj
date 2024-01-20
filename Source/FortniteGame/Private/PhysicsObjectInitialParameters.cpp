#include "PhysicsObjectInitialParameters.h"

FPhysicsObjectInitialParameters::FPhysicsObjectInitialParameters() {
    this->OverrideMassInKG = 0.00f;
    this->OverrideAngularDampening = 0.00f;
    this->OverrideLinearDampening = 0.00f;
    this->PlayerForceMultiplier = 0.00f;
    this->PawnKnockbackMultiplier = 0.00f;
    this->bEnableGravity = false;
    this->bEnableGravityOnHit = false;
    this->bShouldKillPawnOnHit = false;
}

