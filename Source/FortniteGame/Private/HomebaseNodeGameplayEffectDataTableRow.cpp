#include "HomebaseNodeGameplayEffectDataTableRow.h"

FHomebaseNodeGameplayEffectDataTableRow::FHomebaseNodeGameplayEffectDataTableRow() {
    Operation = EGameplayModOp::Additive;
    Magnitude = 1;
    AssociatedGEIdx = 0;
    AssociatedModifierIdx = 0;
}

