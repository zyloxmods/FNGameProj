#include "FocusButton.h"

void UFocusButton::HandleEventModeFocusingChanged(bool bIsEventModeFocusing) {
}

void UFocusButton::HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus) {
}

UFocusButton::UFocusButton() {
    this->StartFocusingSprite = NULL;
    this->StopFocusingSprite = NULL;
}

