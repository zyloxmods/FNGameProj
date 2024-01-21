#include "HeistExitCraftData.h"

FHeistExitCraftData::FHeistExitCraftData() {
    this->ExitCraftSpawner = NULL;
    this->SpawnedExitCraft = NULL;
    this->ExitCraftState = EHeistExitCraftState::None;
    this->SpawnTime = 0.00f;
    this->bIsUsed = false;
    this->bHasDeparted = false;
}

