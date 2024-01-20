#include "FortAttributeInfo.h"

FFortAttributeInfo::FFortAttributeInfo() {
    this->DisplayMethod = EFortAttributeDisplay::BasicInt;
    this->DisplayScalingFactor = 0.00f;
    this->bShowInSummaries = false;
    this->bShowInDifferences = false;
    this->bShowAsBuffInFE = false;
    this->bNegativeValuesShouldBeDisplayedPositively = false;
}

