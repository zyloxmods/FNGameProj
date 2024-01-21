#include "CommonWidgetSwitcher.h"

void UCommonWidgetSwitcher::SetDisableTransitionAnimation(bool bDisableAnimation) {
}

void UCommonWidgetSwitcher::SetActiveWidgetIndex_Advanced(const int32 Index, const bool AttemptActivationChange) {
}

void UCommonWidgetSwitcher::SetActiveWidget_Advanced(UWidget* Widget, const bool AttemptActivationChange) {
}

bool UCommonWidgetSwitcher::HasWidgets() const {
    return false;
}

void UCommonWidgetSwitcher::HandleActiveWidgetDeactivated(UCommonActivatablePanel* DeactivatedPanel) {
}

void UCommonWidgetSwitcher::DeactivateWidget() {
}

void UCommonWidgetSwitcher::ActivateWidget() {
}

void UCommonWidgetSwitcher::ActivatePreviousWidget(bool bCanWrap) {
}

void UCommonWidgetSwitcher::ActivateNextWidget(bool bCanWrap) {
}

UCommonWidgetSwitcher::UCommonWidgetSwitcher() {
    this->TransitionType = ECommonSwitcherTransition::FadeOnly;
    this->TransitionCurveType = ETransitionCurve::CubicInOut;
    this->TransitionDuration = 0.40f;
    this->bWidgetActivationEnabled = true;
    this->bOutroPanelBelow = true;
}

