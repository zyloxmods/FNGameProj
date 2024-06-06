#include "VehicleTrickInfo.h"

FVehicleTrickInfo::FVehicleTrickInfo() {
    LastOnGroundTime = 1;
    bInAirTrick = false;
    bCreditTrick = false;
    mCreditDisabledTime = 1;
    bTrickDeactivated = false;
    bStuckLanding = false;
    TrickScore = 0;
    TrickAxisCount = 0;
    bDoingRotationTrick = false;
    AirControlsAlpha = 1;
    AirDistance = 1;
    AirDistanceSqrd = 1;
    AirTime = 1;
    AirHeight = 1;
    TimeAtLaunch = 1;
    PeterPanCount = 0;
    StoopingSquirrelCount = 0;
    bDidPeterPan = false;
    bDidStoopingSquirrel = false;
}

