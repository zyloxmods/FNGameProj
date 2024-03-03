#include "FortGridPickerButton.h"

void UFortGridPickerButton::SetIsOpen(const bool ShouldBeOpen) {
}

void UFortGridPickerButton::OnButtonClicked() {
}

UFortGridPickerButton::UFortGridPickerButton() {
    this->GridPlacement = MenuPlacement_BelowAnchor;
    this->GridWidget = NULL;
    this->bCloseOnTileClicked = true;
}

