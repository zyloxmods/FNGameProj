#include "CommonRotator.h"

void UCommonRotator::ShiftTextRight() {
}

void UCommonRotator::ShiftTextLeft() {
}

void UCommonRotator::SetSelectedItem(int32 InValue) {
}

void UCommonRotator::PopulateTextLabels(TArray<FText> Labels) {
}

FText UCommonRotator::GetSelectedText() const {
    return FText::GetEmpty();
}

int32 UCommonRotator::GetSelectedIndex() const {
    return 0;
}



UCommonRotator::UCommonRotator() {
    this->MyText = NULL;
}

