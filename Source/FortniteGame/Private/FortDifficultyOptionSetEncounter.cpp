#include "FortDifficultyOptionSetEncounter.h"

UFortDifficultyOptionSetEncounter::UFortDifficultyOptionSetEncounter() {
    this->PacingMode = EFortEncounterPacingMode::SpawnPointsPercentageCurve;
    this->IntensityCurveSequenceCategory = NULL;
    this->SpawnPointsPercentageCurveSequenceCategory = NULL;
    this->SpawnPointsBurstCategory = NULL;
    this->BreathersCategory = NULL;
    this->SpawnPointsMultiplierCategory = NULL;
    this->PawnNumberCapCategory = NULL;
    this->OptionalSpawnTimingCategory = NULL;
    this->SpawnLimitMode = EFortEncounterSpawnLimitType::NoLimit;
    this->SpawnPointsLimitCategory = NULL;
    this->PawnLimitCategory = NULL;
    this->UtilitiesMode = EFortEncounterUtilitiesMode::LockedOnly;
    this->LockedUtilitiesCategory = NULL;
    this->FreeUtilitiesCategory = NULL;
    this->UtilitiesAdjustmentCategory = NULL;
    this->SpawnLocationManagementMode = EFortEncounterSpawnLocationManagementMode::Spawn;
    this->SpawnLocationPlacementMode = EFortEncounterSpawnLocationPlacementMode::Directional;
    this->DirectionNumberCategory = NULL;
    this->DirectionChangeCategory = NULL;
    this->DistanceCategory = NULL;
    this->SpawnGroupProgressionCategory = NULL;
    this->TimeCategory = NULL;
    this->OptionalModifierTagsCategory = NULL;
    this->OptionalMiniBossStartTimedTagsCategory = NULL;
}

