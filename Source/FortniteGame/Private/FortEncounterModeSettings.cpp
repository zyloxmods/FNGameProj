#include "FortEncounterModeSettings.h"

FFortEncounterModeSettings::FFortEncounterModeSettings() {
    this->PacingMode = EFortEncounterPacingMode::SpawnPointsPercentageCurve;
    this->SpawnLocationManagementMode = EFortEncounterSpawnLocationManagementMode::Spawn;
    this->SpawnLocationMode = EFortEncounterSpawnLocationPlacementMode::Directional;
    this->UtilitiesMode = EFortEncounterUtilitiesMode::LockedOnly;
    this->SpawnLimitMode = EFortEncounterSpawnLimitType::NoLimit;
}

