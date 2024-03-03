#include "HUDLayoutToolFireModeButton.h"




EFireModeType UHUDLayoutToolFireModeButton::GetFireModeType() const {
    return EFireModeType::Unset;
}

FText UHUDLayoutToolFireModeButton::GetFireModeDescription() const {
    return FText::GetEmpty();
}

UHUDLayoutToolFireModeButton::UHUDLayoutToolFireModeButton() {
    this->FireModeType = EFireModeType::Unset;
    this->FireModeImage = NULL;
    this->SelectionButton = NULL;
    this->MovieWidget = NULL;
}

