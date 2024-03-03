#include "CommonWidgetSwitcher.h"

void UCommonWidgetSwitcher::SetActiveWidgetIndex_Advanced(const int32 Index, const bool AttemptActivationChange) {
}

void UCommonWidgetSwitcher::SetActiveWidget_Advanced(UWidget* Widget, const bool AttemptActivationChange) {
}

void UCommonWidgetSwitcher::HandleActiveWidgetDeactivated(UCommonActivatablePanel* DeactivatedPanel) {
}

void UCommonWidgetSwitcher::DeactivateWidget() {
}

void UCommonWidgetSwitcher::ActivateWidget() {
}

UCommonWidgetSwitcher::UCommonWidgetSwitcher() {
    this->bWidgetActivationEnabled = true;
    this->bOutroPanelBelow = true;
}

