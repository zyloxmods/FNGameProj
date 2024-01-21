#include "FortHUDElementWidget.h"


void UFortHUDElementWidget::HandleOnHUDResetToDefaults() {
}

void UFortHUDElementWidget::HandleOnHUDElementVisibilityChanged(const FGameplayTagContainer& HiddenHUDElementTags) {
}

UFortHUDElementWidget::UFortHUDElementWidget() {
    this->HiddenVisibility = ESlateVisibility::Hidden;
}

