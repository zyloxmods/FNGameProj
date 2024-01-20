#include "SMVehicleGear.h"

FSMVehicleGear::FSMVehicleGear() {
    this->TopSpeed = 0.00f;
    this->MinSpeed = 0.00f;
    this->PushForce = 0.00f;
    this->RampTime = 0.00f;
    this->SteeringAngleMultiplier = 0.00f;
    this->bAutoBrake = false;
    this->bIgnoreGravity = false;
}

