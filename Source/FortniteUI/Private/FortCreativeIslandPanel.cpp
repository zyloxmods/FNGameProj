#include "FortCreativeIslandPanel.h"

void UFortCreativeIslandPanel::PushPanelInputComponent(APlayerController* PlayerController) {
}

void UFortCreativeIslandPanel::PopPanelInputComponent(APlayerController* PlayerController) {
}

FString UFortCreativeIslandPanel::GetSupportCode() const {
    return TEXT("");
}

UFortCreativeIslandPanel::UFortCreativeIslandPanel() {
    this->PanelInputComponent = NULL;
}

