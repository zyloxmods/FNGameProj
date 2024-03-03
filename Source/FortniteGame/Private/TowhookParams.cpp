#include "TowhookParams.h"

FTowhookParams::FTowhookParams() {
    this->MaxCableLength = 1;
    this->MinCableLength = 1;
    this->bUseSpring = false;
    this->bUseRope = false;
    this->SpringStiffness = 1;
    this->SpringDamping = 1;
    this->SpringMaxStiffnessForce = 1;
    this->SpringMaxStiffnessVelocity = 1;
    this->SpringDeformationRate = 1;
    this->RopeGive = 1;
    this->RopeBreakForce = 1;
    this->RopeYankForce = 1;
    this->ExtendSpeedKmh = 1;
    this->ContractSpeedKmh = 1;
    this->bApplySpringToSelf = false;
    this->bApplySpringToOther = false;
    this->bTakeUpSlack = false;
}

