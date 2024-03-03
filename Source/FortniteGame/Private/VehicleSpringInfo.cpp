#include "VehicleSpringInfo.h"

FVehicleSpringInfo::FVehicleSpringInfo() {
    this->SpringLength = 1;
    this->SpringStiff = 1;
    this->SpringDamp = 1;
    this->SpringRadius = 1;
    this->MaxAccelChange = 1;
    this->SeatSocketIndex = 0;
    this->bIsLookAhead = false;
    this->bNormalToGroundTriangle = false;
    this->bForceAlongSpringNormal = false;
    this->LookAheadMinSpeed = 1;
    this->LookAheadMaxSpeed = 1;
    this->LookAheadMinStiff = 1;
    this->LookAheadMaxStiff = 1;
}

