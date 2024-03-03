#include "FortActivatablePanel.h"

void UFortActivatablePanel::RestoreScrollWidget(UWidget* FallbackWidget) {
}

void UFortActivatablePanel::RestoreCenterWidget(UWidget* FallbackWidget) {
}

void UFortActivatablePanel::AsyncPlaySound2D(const UObject* WorldContextObject, TSoftObjectPtr<USoundBase> SoundToLoad, float VolumeMultiplier, float PitchMultiplier, float StartTime) {
}

UFortActivatablePanel::UFortActivatablePanel() {
    this->bIsPushedOnToContentPanelStack = false;
    this->bIsAlreadyOnContentPanelStack = false;
    this->InputPriority = EInputPriority::Normal;
    this->bIsClosableByPlayerInput = true;
}

