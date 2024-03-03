#include "CommonNumericTextBlock.h"

void UCommonNumericTextBlock::SetNumericType(ECommonNumericType InNumericType) {
}

void UCommonNumericTextBlock::SetCurrentValue(const float NewValue) {
}

bool UCommonNumericTextBlock::IsInterpolatingNumericValue() const {
    return false;
}

void UCommonNumericTextBlock::InterpolateToValue(const float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset) {
}

float UCommonNumericTextBlock::GetTargetValue() const {
    return 0.0f;
}

UCommonNumericTextBlock::UCommonNumericTextBlock() {
    this->CurrentNumericValue = 1;
    this->NumericType = ECommonNumericType::Number;
    this->EaseOutInterpolationExponent = 1;
    this->InterpolationUpdateInterval = 1;
    this->PostInterpolationShrinkDuration = 1;
    this->PerformSizeInterpolation = true;
    this->IsPercentage = false;
}

