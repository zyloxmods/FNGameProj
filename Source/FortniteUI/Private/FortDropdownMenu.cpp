#include "FortDropdownMenu.h"

void UFortDropdownMenu::RegisterButton(UCommonButton* Button) {
}

void UFortDropdownMenu::InternalOnSelectionChanged(UCommonButton* AssociatedButton, int32 ButtonIndex) {
}

void UFortDropdownMenu::InternalOnButtonClicked(UCommonButton* AssociatedButton, int32 ButtonIndex) {
}

int32 UFortDropdownMenu::GetSelectedButtonIndex() const {
    return 0;
}

UCommonButton* UFortDropdownMenu::GetSelectedButton() const {
    return NULL;
}

void UFortDropdownMenu::DeselectAll() {
}

void UFortDropdownMenu::ClearRegisteredButtons() {
}

UFortDropdownMenu::UFortDropdownMenu() {
    this->ButtonGroup = NULL;
    this->bCloseOnSelection = true;
}

