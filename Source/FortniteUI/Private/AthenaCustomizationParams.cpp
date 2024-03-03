#include "AthenaCustomizationParams.h"

FAthenaCustomizationParams::FAthenaCustomizationParams() {
    this->Category = EAthenaCustomizationCategory::None;
    this->CategorySubslotIndex = 0;
    this->bAllowUnownedItems = false;
    this->bOneItemPerSlot = false;
    this->OverrideSlotImage = NULL;
}

