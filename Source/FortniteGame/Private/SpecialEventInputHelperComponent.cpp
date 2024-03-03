#include "SpecialEventInputHelperComponent.h"

void USpecialEventInputHelperComponent::PushInputComponent() {
}

void USpecialEventInputHelperComponent::PopInputComponent() {
}

USpecialEventInputHelperComponent::USpecialEventInputHelperComponent() {
    this->bBlockInput = false;
    this->InputComp = NULL;
}

