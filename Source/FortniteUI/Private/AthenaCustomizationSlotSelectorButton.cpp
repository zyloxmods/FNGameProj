#include "AthenaCustomizationSlotSelectorButton.h"

void UAthenaCustomizationSlotSelectorButton::SetCustomizationType(EAthenaCustomizationCategory NewType, int32 InSubslotIndex) {
}

UAthenaCustomizationSlotSelectorButton::UAthenaCustomizationSlotSelectorButton() {
    this->CustomizationType = EAthenaCustomizationCategory::None;
    this->SubslotIndex = 0;
    this->ItemWidget = NULL;
}

