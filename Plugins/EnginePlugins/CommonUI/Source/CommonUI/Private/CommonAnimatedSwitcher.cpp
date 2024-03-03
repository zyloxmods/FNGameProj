#include "CommonAnimatedSwitcher.h"

void UCommonAnimatedSwitcher::SetDisableTransitionAnimation(bool bDisableAnimation) {
}

bool UCommonAnimatedSwitcher::HasWidgets() const {
    return false;
}

void UCommonAnimatedSwitcher::ActivatePreviousWidget(bool bCanWrap) {
}

void UCommonAnimatedSwitcher::ActivateNextWidget(bool bCanWrap) {
}

UCommonAnimatedSwitcher::UCommonAnimatedSwitcher() {
    this->TransitionType = ECommonSwitcherTransition::FadeOnly;
    this->TransitionCurveType = ETransitionCurve::Linear;
    this->TransitionDuration = 1;
}

