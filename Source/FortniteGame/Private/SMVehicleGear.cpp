#include "SMVehicleGear.h"

FSMVehicleGear::FSMVehicleGear() {
    this->TopSpeed = 1;
    this->MinSpeed = 1;
    this->PushForce = 1;
    this->RampTime = 1;
    this->SteeringAngleMultiplier = 1;
    this->bAutoBrake = false;
    this->bIgnoreGravity = false;
}

