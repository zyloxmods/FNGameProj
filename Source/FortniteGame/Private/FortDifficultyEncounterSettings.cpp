#include "FortDifficultyEncounterSettings.h"

UFortDifficultyEncounterSettings::UFortDifficultyEncounterSettings() {
    this->SpawnLimitMode = EFortEncounterSpawnLimitType::NoLimit;
    this->PacingMode = EFortEncounterPacingMode::Fixed;
}

