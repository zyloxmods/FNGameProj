#include "SMVehicleGear.h"

FSMVehicleGear::FSMVehicleGear() {
    TopSpeed = 1;
    MinSpeed = 1;
    PushForce = 1;
    RampTime = 1;
    SteeringAngleMultiplier = 1;
    bAutoBrake = false;
    bIgnoreGravity = false;
}

