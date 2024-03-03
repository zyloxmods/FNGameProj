#include "FortInteractionIndicatorWidget.h"
#include "Templates/SubclassOf.h"

void UFortInteractionIndicatorWidget::HandleRemoveContextOverride(TSubclassOf<UFortInteractContextInfoWidget> ContextOverrideWidget) {
}

void UFortInteractionIndicatorWidget::HandleAddContextOverride(TSubclassOf<UFortInteractContextInfoWidget> ContextOverrideWidget) {
}

UFortInteractContextInfoWidget* UFortInteractionIndicatorWidget::ActivateContextOverride(const TSubclassOf<UFortInteractContextInfoWidget>& ContextOverrideWidget, const UFortInteractContextInfo* ContextInfo) {
    return NULL;
}

UFortInteractionIndicatorWidget::UFortInteractionIndicatorWidget() {
    this->Switcher_PrimaryContext = NULL;
}

