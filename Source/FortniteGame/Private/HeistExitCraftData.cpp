#include "HeistExitCraftData.h"

FHeistExitCraftData::FHeistExitCraftData() {
    ExitCraftSpawner = NULL;
    SpawnedExitCraft = NULL;
    ExitCraftState = EHeistExitCraftState::None;
    SpawnTime = 1;
    bIsUsed = false;
    bHasDeparted = false;
}

