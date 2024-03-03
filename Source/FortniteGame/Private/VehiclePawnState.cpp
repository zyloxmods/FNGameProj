#include "VehiclePawnState.h"

FVehiclePawnState::FVehiclePawnState() {
    this->Vehicle = NULL;
    this->VehicleApexZ = 1;
    this->SeatIndex = 0;
    this->ExitSocketIndex = 0;
    this->bOverrideVehicleExit = false;
    this->EntryTime = 1;
}

