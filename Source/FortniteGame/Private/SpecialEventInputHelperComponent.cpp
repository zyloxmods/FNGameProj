#include "SpecialEventInputHelperComponent.h"

void USpecialEventInputHelperComponent::PushInputComponent() {
}

void USpecialEventInputHelperComponent::PopInputComponent() {
}

USpecialEventInputHelperComponent::USpecialEventInputHelperComponent() {
    bBlockInput = false;
    InputComp = NULL;
}

