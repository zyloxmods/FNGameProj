#include "SpawnMachineRepData.h"

FSpawnMachineRepData::FSpawnMachineRepData() {
    this->SpawnMachineState = ESpawnMachineState::Default;
    this->SpawnMachineCooldownStartTime = 1;
    this->SpawnMachineCooldownEndTime = 1;
    this->SpawnMachineRepDataHandle = 0;
}

