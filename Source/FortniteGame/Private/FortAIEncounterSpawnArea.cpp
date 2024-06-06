#include "FortAIEncounterSpawnArea.h"

FFortAIEncounterSpawnArea::FFortAIEncounterSpawnArea() {
    bIsActive = false;
    bUsingFallbackQuery = false;
    SpawnLocationManagementMode = EFortEncounterSpawnLocationManagementMode::Spawn;
}

