#include "FortTouchInteractionLayer.h"

void UFortTouchInteractionLayer::UpdateButtonTimer(AActor* In, float TotalDuration, float Remaining) {
}

void UFortTouchInteractionLayer::UpdateButtonFocusForInteraction(UFortInteractContextInfo* NewInteraction) {
}

void UFortTouchInteractionLayer::RemoveInteraction(AActor* In) {
}

void UFortTouchInteractionLayer::AddInteraction(AActor* In) {
}

UFortTouchInteractionLayer::UFortTouchInteractionLayer() {
    this->WidgetClass = NULL;
    this->ContentPanel = NULL;
    this->FocusedInteraction = NULL;
    this->OwningPC = NULL;
    this->InteractionComponent = NULL;
}

