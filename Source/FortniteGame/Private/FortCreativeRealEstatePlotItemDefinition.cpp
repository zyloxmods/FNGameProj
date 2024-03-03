#include "FortCreativeRealEstatePlotItemDefinition.h"

UFortCreativeRealEstatePlotItemDefinition::UFortCreativeRealEstatePlotItemDefinition() {
    this->SizeX = 0;
    this->SizeY = 0;
    this->OffsetType = ERealEstateOffsetType::CustomOffsetFromCorner;
    this->SortIndex = 0;
    this->bIsAvailableToUsers = false;
    this->bIsCreativeHeatmapEnabled = false;
    this->SpatialInfluenceDistanceMultiplier = 1;
    this->SpatialThermometerCellSizeMultiplier = 0;
}

