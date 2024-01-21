#include "HomebaseNodeGameplayEffectDataTableRow.h"

FHomebaseNodeGameplayEffectDataTableRow::FHomebaseNodeGameplayEffectDataTableRow() {
    this->Operation = EGameplayModOp::Additive;
    this->Magnitude = 0.00f;
    this->AssociatedGEIdx = 0;
    this->AssociatedModifierIdx = 0;
}

