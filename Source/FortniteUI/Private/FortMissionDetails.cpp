#include "FortMissionDetails.h"

FFortMissionDetails::FFortMissionDetails() {
    this->TileType = EFortTheaterMapTileType::Normal;
    this->bIsGroupContent = false;
    this->MissionDefinition = NULL;
    this->RequiredBaseRating = 0;
    this->RecommendedBaseRating = 0;
    this->ContentDifficultyLevel = 0;
    this->ContentAccountLevel = 0;
    this->LootLevel = 0;
    this->bOverrideConningText = false;
    this->AssociatedCloudSaveItemDefinition = NULL;
}

