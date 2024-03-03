#include "HUDLayoutToolContext.h"

void UHUDLayoutToolContext::SetFireModeOpenState(bool bNewlyOpened) {
}

void UHUDLayoutToolContext::SetFireMode(EFireModeType NewFireMode) {
}

void UHUDLayoutToolContext::SetCustomFireMode(bool bAutofireEnabled, bool bTapToShootEnabled, bool bAlwaysShowDedicatedButton) {
}

void UHUDLayoutToolContext::OnFireModeSelected(bool bWasFireModeTutorialSkipped) {
}

bool UHUDLayoutToolContext::IsFireModeAvailable(EFireModeType NewFireMode) const {
    return false;
}

bool UHUDLayoutToolContext::GetFireModeOpenState() const {
    return false;
}

void UHUDLayoutToolContext::GetFireMode(EFireModeType& FireMode, bool& bAutofireEnabled, bool& bTapToShootEnabled, bool& bAlwaysShowDedicatedButton) const {
}

UHUDLayoutToolContext::UHUDLayoutToolContext() {
}

