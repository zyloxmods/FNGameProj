#include "SpawnMachineRepData.h"

FSpawnMachineRepData::FSpawnMachineRepData() {
    SpawnMachineState = ESpawnMachineState::Default;
    SpawnMachineCooldownStartTime = 1;
    SpawnMachineCooldownEndTime = 1;
    SpawnMachineRepDataHandle = 0;
}

