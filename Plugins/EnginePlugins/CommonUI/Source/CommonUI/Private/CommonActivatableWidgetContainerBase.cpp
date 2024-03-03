#include "CommonActivatableWidgetContainerBase.h"
#include "Templates/SubclassOf.h"

void UCommonActivatableWidgetContainerBase::RemoveWidget(UCommonActivatableWidget* WidgetToRemove) {
}

UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::GetActiveWidget() const {
    return NULL;
}

void UCommonActivatableWidgetContainerBase::ClearWidgets() {
}

UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::BP_AddWidget(TSubclassOf<UCommonActivatableWidget> ActivatableWidgetClass) {
    return NULL;
}

UCommonActivatableWidgetContainerBase::UCommonActivatableWidgetContainerBase() {
    this->TransitionType = ECommonSwitcherTransition::FadeOnly;
    this->TransitionCurveType = ETransitionCurve::Linear;
    this->TransitionDuration = 1;
    this->DisplayedWidget = NULL;
}

