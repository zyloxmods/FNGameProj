#include "CommonPopupButton.h"

UWidget* UCommonPopupButton::GetMenuAnchorWidget() {
    return NULL;
}

UCommonPopupButton::UCommonPopupButton() {
    this->PopupMenuAnchor = NULL;
    this->PopupMenu = NULL;
}

