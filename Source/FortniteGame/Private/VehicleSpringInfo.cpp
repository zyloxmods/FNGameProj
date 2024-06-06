#include "VehicleSpringInfo.h"

FVehicleSpringInfo::FVehicleSpringInfo() {
    SpringLength = 1;
    SpringStiff = 1;
    SpringDamp = 1;
    SpringRadius = 1;
    MaxAccelChange = 1;
    SeatSocketIndex = 0;
    bIsLookAhead = false;
    bNormalToGroundTriangle = false;
    bForceAlongSpringNormal = false;
    LookAheadMinSpeed = 1;
    LookAheadMaxSpeed = 1;
    LookAheadMinStiff = 1;
    LookAheadMaxStiff = 1;
}

