#include "HeistExitCraftData.h"

FHeistExitCraftData::FHeistExitCraftData() {
    this->ExitCraftSpawner = NULL;
    this->SpawnedExitCraft = NULL;
    this->ExitCraftState = EHeistExitCraftState::None;
    this->SpawnTime = 1;
    this->bIsUsed = false;
    this->bHasDeparted = false;
}

