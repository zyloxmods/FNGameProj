#include "FortEncounterModeSettings.h"

FFortEncounterModeSettings::FFortEncounterModeSettings() {
    PacingMode = EFortEncounterPacingMode::SpawnPointsPercentageCurve;
    SpawnLocationManagementMode = EFortEncounterSpawnLocationManagementMode::Spawn;
    SpawnLocationMode = EFortEncounterSpawnLocationPlacementMode::Directional;
    UtilitiesMode = EFortEncounterUtilitiesMode::LockedOnly;
    SpawnLimitMode = EFortEncounterSpawnLimitType::NoLimit;
}

