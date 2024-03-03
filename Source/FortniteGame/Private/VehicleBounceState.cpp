#include "VehicleBounceState.h"

FVehicleBounceState::FVehicleBounceState() {
    this->CompressionState = EBounceCompressionState::None;
    this->CompressionValue = 1;
    this->StateCooldown = 1;
}

