#include "VehiclePawnState.h"

FVehiclePawnState::FVehiclePawnState() {
    this->Vehicle = NULL;
    this->VehicleApexZ = 0.00f;
    this->SeatIndex = 0;
    this->ExitSocketIndex = 0;
    this->bOverrideVehicleExit = false;
    this->EntryTime = 0.00f;
}

