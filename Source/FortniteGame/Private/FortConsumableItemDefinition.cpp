#include "FortConsumableItemDefinition.h"

UAnimMontage* UFortConsumableItemDefinition::GetUseAnimation() const {
    return NULL;
}

float UFortConsumableItemDefinition::GetHealthRestored(int32 ItemLevel) const {
    return 0.0f;
}

float UFortConsumableItemDefinition::GetAnimPlayRate() const {
    return 0.0f;
}

void UFortConsumableItemDefinition::ConsumeItem(const FGameplayEventData& EventData) {
}

UFortConsumableItemDefinition::UFortConsumableItemDefinition() {
    this->UseTime = 3.00f;
    this->bRequiresMissingHealth = true;
}

