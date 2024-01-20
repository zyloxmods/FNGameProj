#include "FortActorCanvas.h"

void UFortActorCanvas::OnHUDElementVisibilityChanged(const FGameplayTagContainer& HiddenHUDElementTags) {
}

UFortActorCanvasSlot* UFortActorCanvas::AddActorIndicator(UFortActorIndicatorWidget* Indicator) {
    return NULL;
}

UFortActorCanvas::UFortActorCanvas() {
    this->bDrawElementsInOrder = false;
}

