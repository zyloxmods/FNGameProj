#include "FortCreativeRealEstatePlotItemDefinition.h"

UFortCreativeRealEstatePlotItemDefinition::UFortCreativeRealEstatePlotItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    SizeX = 0;
    SizeY = 0;
    OffsetType = ERealEstateOffsetType::CustomOffsetFromCorner;
    SortIndex = 0;
    bIsAvailableToUsers = false;
    bIsCreativeHeatmapEnabled = false;
    SpatialInfluenceDistanceMultiplier = 1;
    SpatialThermometerCellSizeMultiplier = 0;
}

