#include "AIHotSpotSlotGenerator_OnBoundingBox.h"

UAIHotSpotSlotGenerator_OnBoundingBox::UAIHotSpotSlotGenerator_OnBoundingBox() {
    SlotClass = NULL;
    ExpandBy = 1;
    OffsetFromEdge = 1;
    Spacing = 1;
    bLimitMaxExtent = false;
    bMustHitFocusActor = false;
    SlotDirectionCalculation = EBoundingBoxSlotDirectionCalculation::Auto;
}

