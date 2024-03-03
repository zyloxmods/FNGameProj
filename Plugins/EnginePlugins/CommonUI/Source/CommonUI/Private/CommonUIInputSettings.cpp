#include "CommonUIInputSettings.h"

UCommonUIInputSettings::UCommonUIInputSettings() {
    this->bLinkCursorToGamepadFocus = true;
    this->UIActionProcessingPriority = 0;
    this->InputActions.AddDefaulted(7);
}

