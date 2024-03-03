#include "VehicleTrickInfo.h"

FVehicleTrickInfo::FVehicleTrickInfo() {
    this->LastOnGroundTime = 1;
    this->bInAirTrick = false;
    this->bCreditTrick = false;
    this->mCreditDisabledTime = 1;
    this->bTrickDeactivated = false;
    this->bStuckLanding = false;
    this->TrickScore = 0;
    this->TrickAxisCount = 0;
    this->bDoingRotationTrick = false;
    this->AirControlsAlpha = 1;
    this->AirDistance = 1;
    this->AirDistanceSqrd = 1;
    this->AirTime = 1;
    this->AirHeight = 1;
    this->TimeAtLaunch = 1;
    this->PeterPanCount = 0;
    this->StoopingSquirrelCount = 0;
    this->bDidPeterPan = false;
    this->bDidStoopingSquirrel = false;
}

