#include "AIHotSpotSlotGenerator_OnBoundingBox.h"

UAIHotSpotSlotGenerator_OnBoundingBox::UAIHotSpotSlotGenerator_OnBoundingBox() {
    this->SlotClass = NULL;
    this->ExpandBy = 1;
    this->OffsetFromEdge = 1;
    this->Spacing = 1;
    this->bLimitMaxExtent = false;
    this->bMustHitFocusActor = false;
    this->SlotDirectionCalculation = EBoundingBoxSlotDirectionCalculation::Auto;
}

