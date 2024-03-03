#include "CommonActivatableWidget.h"

bool UCommonActivatableWidget::IsActivated() const {
    return false;
}

void UCommonActivatableWidget::DeactivateWidget() {
}





void UCommonActivatableWidget::ActivateWidget() {
}

UCommonActivatableWidget::UCommonActivatableWidget() {
    this->bAutoActivate = false;
    this->bIsBackHandler = false;
    this->bSupportsActivationFocus = true;
    this->bIsModal = false;
    this->bAutoRestoreFocus = false;
    this->bSetVisibilityOnActivated = false;
    this->ActivatedVisibility = ESlateVisibility::Visible;
    this->bSetVisibilityOnDeactivated = false;
    this->DeactivatedVisibility = ESlateVisibility::Visible;
    this->bIsActive = false;
}

