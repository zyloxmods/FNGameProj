#include "VehicleTrickLocalAxisRotInfo.h"

FVehicleTrickLocalAxisRotInfo::FVehicleTrickLocalAxisRotInfo() {
    this->Angle = 1;
    this->AccumulatedHalfSpinCount = 0;
    this->AccumulatedAngle = 1;
    this->AngleAtFurthestExtent = 1;
    this->TrickOrder = 0;
    this->Points = 0;
}

