#include "PhysicsPawnObjectInitialParameters.h"

FPhysicsPawnObjectInitialParameters::FPhysicsPawnObjectInitialParameters() {
    OverrideMassInKG = 1;
    OverrideAngularDampening = 1;
    OverrideLinearDampening = 1;
    PlayerForceMultiplier = 1;
    PawnKnockbackMultiplier = 1;
    bEnableGravity = false;
    bEnableGravityOnHit = false;
    bShouldKillPawnOnHit = false;
}

