#include "VehicleSpringInfo.h"

FVehicleSpringInfo::FVehicleSpringInfo() {
    this->SpringLength = 0.00f;
    this->SpringStiff = 0.00f;
    this->SpringDamp = 0.00f;
    this->SpringRadius = 0.00f;
    this->MaxAccelChange = 0.00f;
    this->SeatSocketIndex = 0;
    this->bIsLookAhead = false;
    this->bNormalToGroundTriangle = false;
    this->bForceAlongSpringNormal = false;
    this->LookAheadMinSpeed = 0.00f;
    this->LookAheadMaxSpeed = 0.00f;
    this->LookAheadMinStiff = 0.00f;
    this->LookAheadMaxStiff = 0.00f;
}

