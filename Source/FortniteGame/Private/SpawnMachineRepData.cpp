#include "SpawnMachineRepData.h"

FSpawnMachineRepData::FSpawnMachineRepData() {
    this->SpawnMachineState = ESpawnMachineState::Default;
    this->SpawnMachineCooldownStartTime = 0.00f;
    this->SpawnMachineCooldownEndTime = 0.00f;
}

