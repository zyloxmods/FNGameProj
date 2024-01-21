#include "VehicleBounceState.h"

FVehicleBounceState::FVehicleBounceState() {
    this->CompressionState = EBounceCompressionState::None;
    this->CompressionValue = 0.00f;
    this->StateCooldown = 0.00f;
}

