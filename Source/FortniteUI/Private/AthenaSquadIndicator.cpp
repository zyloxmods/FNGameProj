#include "AthenaSquadIndicator.h"

UAthenaSquadIndicator::UAthenaSquadIndicator() {
    this->IndicatorWorldOffsetProperty = 1;
    this->IndicatorItemOffset = 1;
    this->IndicatorSpecialServerOffset = 1;
    this->WorldOffsetInterpValue = 1;
    this->LoadingPlaceholder = NULL;
    this->Image_SmallIndicator = NULL;
    this->Image_LocationFlare = NULL;
    this->Image_LargeIndicator = NULL;
    this->Anim_LocationPlaced = NULL;
    this->Anim_DangerPlaced = NULL;
    this->Anim_ItemPlaced = NULL;
    this->Anim_Hovered = NULL;
    this->Image_TrajectoryLargeIndicator = NULL;
    this->Image_TrajectorySmallIndicator = NULL;
}

