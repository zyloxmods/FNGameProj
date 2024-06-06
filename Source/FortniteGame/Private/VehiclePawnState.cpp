#include "VehiclePawnState.h"

FVehiclePawnState::FVehiclePawnState() {
    Vehicle = NULL;
    VehicleApexZ = 1;
    SeatIndex = 0;
    ExitSocketIndex = 0;
    bOverrideVehicleExit = false;
    EntryTime = 1;
}

