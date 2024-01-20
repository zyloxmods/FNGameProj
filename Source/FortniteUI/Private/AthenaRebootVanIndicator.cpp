#include "AthenaRebootVanIndicator.h"


UAthenaRebootVanIndicator::UAthenaRebootVanIndicator() {
    this->SpawnMachineIndex = 0;
    this->SpawnMachineState = ESpawnMachineState::Default;
    this->SpawnMachineCooldownStartTime = -1.00f;
    this->SpawnMachineCooldownEndTime = -1.00f;
}

