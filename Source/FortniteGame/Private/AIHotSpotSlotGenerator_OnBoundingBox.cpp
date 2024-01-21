#include "AIHotSpotSlotGenerator_OnBoundingBox.h"

UAIHotSpotSlotGenerator_OnBoundingBox::UAIHotSpotSlotGenerator_OnBoundingBox() {
    this->SlotClass = NULL;
    this->ExpandBy = 0.00f;
    this->OffsetFromEdge = 0.00f;
    this->Spacing = 90.00f;
    this->bLimitMaxExtent = false;
    this->bMustHitFocusActor = false;
    this->SlotDirectionCalculation = EBoundingBoxSlotDirectionCalculation::Auto;
}

