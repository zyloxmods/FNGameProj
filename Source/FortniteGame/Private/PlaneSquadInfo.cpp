#include "PlaneSquadInfo.h"

FPlaneSquadInfo::FPlaneSquadInfo() {
    this->LastDriver = NULL;
    this->SquadId = 0;
    this->PlanesRemaining = 0;
    this->LastCollectedChestVehicle = NULL;
    this->LastCollectedChestServerTime = 0.00f;
}

