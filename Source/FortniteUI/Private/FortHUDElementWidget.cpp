#include "FortHUDElementWidget.h"


void UFortHUDElementWidget::HandleOnHUDElementVisibilityChanged(const FGameplayTagContainer& HiddenHUDElementTags) {
}

UFortHUDElementWidget::UFortHUDElementWidget() {
    this->HiddenVisibility = ESlateVisibility::Visible;
    this->TutorialHighlight = NULL;
}

