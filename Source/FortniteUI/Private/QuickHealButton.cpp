#include "QuickHealButton.h"

void UQuickHealButton::HandlePlayerShieldUpdated(float PlayerShield, EFortHitPointModificationReason Reason) {
}

void UQuickHealButton::HandlePlayerMaxShieldUpdated(float PlayerMaxShield) {
}

void UQuickHealButton::HandlePlayerMaxHealthUpdated(float PlayerMaxHealth) {
}

void UQuickHealButton::HandlePlayerHealthUpdated(float PlayerHealth, EFortHitPointModificationReason Reason) {
}

UQuickHealButton::UQuickHealButton() {
    this->Image_Icon = NULL;
    this->Button_Overlay = NULL;
}

