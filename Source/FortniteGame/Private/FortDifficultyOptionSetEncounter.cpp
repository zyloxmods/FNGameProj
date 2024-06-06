#include "FortDifficultyOptionSetEncounter.h"

UFortDifficultyOptionSetEncounter::UFortDifficultyOptionSetEncounter() {
    PacingMode = EFortEncounterPacingMode::SpawnPointsPercentageCurve;
    IntensityCurveSequenceCategory = NULL;
    SpawnPointsPercentageCurveSequenceCategory = NULL;
    SpawnPointsBurstCategory = NULL;
    BreathersCategory = NULL;
    SpawnPointsMultiplierCategory = NULL;
    PawnNumberCapCategory = NULL;
    OptionalSpawnTimingCategory = NULL;
    SpawnLimitMode = EFortEncounterSpawnLimitType::NoLimit;
    SpawnPointsLimitCategory = NULL;
    PawnLimitCategory = NULL;
    UtilitiesMode = EFortEncounterUtilitiesMode::LockedOnly;
    LockedUtilitiesCategory = NULL;
    FreeUtilitiesCategory = NULL;
    UtilitiesAdjustmentCategory = NULL;
    SpawnLocationManagementMode = EFortEncounterSpawnLocationManagementMode::Spawn;
    SpawnLocationPlacementMode = EFortEncounterSpawnLocationPlacementMode::Directional;
    DirectionNumberCategory = NULL;
    DirectionChangeCategory = NULL;
    DistanceCategory = NULL;
    SpawnGroupProgressionCategory = NULL;
    TimeCategory = NULL;
    OptionalModifierTagsCategory = NULL;
    OptionalMiniBossStartTimedTagsCategory = NULL;
}

