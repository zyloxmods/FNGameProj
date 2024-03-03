#include "InteractionType.h"

FInteractionType::FInteractionType() {
    this->InteractionType = TInteractionType::IT_NoInteraction;
    this->InteractionBeingAttempted = EInteractionBeingAttempted::FirstInteraction;
}

