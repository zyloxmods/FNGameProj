#include "FortNumericTextBlock.h"

bool UFortNumericTextBlock::IsInterpolatingNumber() const {
    return false;
}

void UFortNumericTextBlock::InterpolateSet(int32 InValue, float InUpdateLength, float InReportEndEarly) {
}

int32 UFortNumericTextBlock::GetCurrentValue() const {
    return 0;
}

void UFortNumericTextBlock::DirectlySet(int32 InValue) {
}

UFortNumericTextBlock::UFortNumericTextBlock() {
    this->StartingValue = 0;
    this->DestValue = 0;
    this->bUseGrouping = true;
    this->bAsCurrency = false;
    this->EaseOutExp = 1.50f;
    this->UpdateInterval = 0.10f;
    this->ShrinkTime = 0.25f;
}

