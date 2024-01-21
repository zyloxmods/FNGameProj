#include "FortActivatablePanel.h"

void UFortActivatablePanel::RestoreScrollWidget(UWidget* FallbackWidget) {
}

void UFortActivatablePanel::RestoreCenterWidget(UWidget* FallbackWidget) {
}

UFortActivatablePanel::UFortActivatablePanel() {
    this->bIsPushedOnToContentPanelStack = false;
    this->bIsAlreadyOnContentPanelStack = false;
    this->InputPriority = EInputPriority::Normal;
    this->bIsClosableByPlayerInput = true;
}

