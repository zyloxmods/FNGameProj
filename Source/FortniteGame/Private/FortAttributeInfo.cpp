#include "FortAttributeInfo.h"

FFortAttributeInfo::FFortAttributeInfo() {
    DisplayMethod = EFortAttributeDisplay::BasicInt;
    DisplayScalingFactor = 1;
    bShowInSummaries = false;
    bShowInDifferences = false;
    bShowAsBuffInFE = false;
    bNegativeValuesShouldBeDisplayedPositively = false;
}

