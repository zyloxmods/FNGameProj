#include "VehicleBounceState.h"

FVehicleBounceState::FVehicleBounceState() {
    CompressionState = EBounceCompressionState::None;
    CompressionValue = 1;
    StateCooldown = 1;
}

