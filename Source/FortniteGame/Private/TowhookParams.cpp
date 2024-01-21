#include "TowhookParams.h"

FTowhookParams::FTowhookParams() {
    this->MaxCableLength = 0.00f;
    this->MinCableLength = 0.00f;
    this->bUseSpring = false;
    this->bUseRope = false;
    this->SpringStiffness = 0.00f;
    this->SpringDamping = 0.00f;
    this->SpringMaxStiffnessForce = 0.00f;
    this->SpringMaxStiffnessVelocity = 0.00f;
    this->SpringDeformationRate = 0.00f;
    this->RopeGive = 0.00f;
    this->RopeBreakForce = 0.00f;
    this->RopeYankForce = 0.00f;
    this->ExtendSpeedKmh = 0.00f;
    this->ContractSpeedKmh = 0.00f;
    this->bApplySpringToSelf = false;
    this->bApplySpringToOther = false;
    this->bTakeUpSlack = false;
}

