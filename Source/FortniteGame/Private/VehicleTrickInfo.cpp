#include "VehicleTrickInfo.h"

FVehicleTrickInfo::FVehicleTrickInfo() {
    this->LastOnGroundTime = 0.00f;
    this->bInAirTrick = false;
    this->bCreditTrick = false;
    this->mCreditDisabledTime = 0.00f;
    this->bTrickDeactivated = false;
    this->bStuckLanding = false;
    this->TrickScore = 0;
    this->TrickAxisCount = 0;
    this->bDoingRotationTrick = false;
    this->AirControlsAlpha = 0.00f;
    this->AirDistance = 0.00f;
    this->AirDistanceSqrd = 0.00f;
    this->AirTime = 0.00f;
    this->AirHeight = 0.00f;
    this->TimeAtLaunch = 0.00f;
    this->PeterPanCount = 0;
    this->StoopingSquirrelCount = 0;
    this->bDidPeterPan = false;
    this->bDidStoopingSquirrel = false;
}

