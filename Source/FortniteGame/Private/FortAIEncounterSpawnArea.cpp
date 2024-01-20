#include "FortAIEncounterSpawnArea.h"

FFortAIEncounterSpawnArea::FFortAIEncounterSpawnArea() {
    this->bIsActive = false;
    this->bUsingFallbackQuery = false;
    this->SpawnLocationManagementMode = EFortEncounterSpawnLocationManagementMode::Spawn;
}

