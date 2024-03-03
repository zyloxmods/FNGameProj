#include "HomebaseNodeGameplayEffectDataTableRow.h"

FHomebaseNodeGameplayEffectDataTableRow::FHomebaseNodeGameplayEffectDataTableRow() {
    this->Operation = EGameplayModOp::Additive;
    this->Magnitude = 1;
    this->AssociatedGEIdx = 0;
    this->AssociatedModifierIdx = 0;
}

