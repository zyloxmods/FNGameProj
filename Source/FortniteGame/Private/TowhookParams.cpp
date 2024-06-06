#include "TowhookParams.h"

FTowhookParams::FTowhookParams() {
    MaxCableLength = 1;
    MinCableLength = 1;
    bUseSpring = false;
    bUseRope = false;
    SpringStiffness = 1;
    SpringDamping = 1;
    SpringMaxStiffnessForce = 1;
    SpringMaxStiffnessVelocity = 1;
    SpringDeformationRate = 1;
    RopeGive = 1;
    RopeBreakForce = 1;
    RopeYankForce = 1;
    ExtendSpeedKmh = 1;
    ContractSpeedKmh = 1;
    bApplySpringToSelf = false;
    bApplySpringToOther = false;
    bTakeUpSlack = false;
}

