#include "FortItemCountTextBlock.h"

void UFortItemCountTextBlock::SetOverrideValue(int32 InOverrideValue) {
}

void UFortItemCountTextBlock::SetItemDefinition(UFortItemDefinition* InItemDefinition) {
}

void UFortItemCountTextBlock::SetCountStyle(EFortItemCountStyle InCountStyle) {
}

void UFortItemCountTextBlock::InterpolateOverrideToValue(const int32 TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset) {
}

void UFortItemCountTextBlock::HandleItemCountChanged(UFortItemDefinition* Definition, int32 Delta) {
}

UFortItemCountTextBlock::UFortItemCountTextBlock() {
    this->ItemDefinition = NULL;
    this->CountStyle = EFortItemCountStyle::StackCount;
    this->ItemCountMaxInterpolateDuration = 1;
    this->ItemCountMinInterpolateRate = 1;
}

