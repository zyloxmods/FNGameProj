#include "AthenaSquadIndicator.h"

UAthenaSquadIndicator::UAthenaSquadIndicator() {
    this->IndicatorWorldOffsetProperty = 115.00f;
    this->IndicatorItemOffset = 50.00f;
    this->WorldOffsetInterpValue = 3.00f;
    this->LoadingPlaceholder = NULL;
    this->Image_SmallIndicator = NULL;
    this->Image_LocationFlare = NULL;
    this->Image_LargeIndicator = NULL;
    this->Anim_LocationPlaced = NULL;
    this->Anim_DangerPlaced = NULL;
    this->Anim_ItemPlaced = NULL;
    this->Anim_Hovered = NULL;
}

