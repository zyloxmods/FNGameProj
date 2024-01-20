#include "HUDLayoutToolPropertyWidget.h"



void UHUDLayoutToolPropertyWidget::RefreshProperties_Implementation() {
}

void UHUDLayoutToolPropertyWidget::OnWidgetSelected(UHUDLayoutToolPlacementWidget* NewlySelectedWidget) {
}

void UHUDLayoutToolPropertyWidget::OnNewSliderValue(float NormalizedValue) {
}

void UHUDLayoutToolPropertyWidget::OnNewRotatorValue(int32 NormalizedValue) {
}

void UHUDLayoutToolPropertyWidget::OnNewBoolValue(bool bNewValue) {
}

TArray<FText> UHUDLayoutToolPropertyWidget::GetRotatorLabels() const {
    return TArray<FText>();
}

int32 UHUDLayoutToolPropertyWidget::GetCurrentValueAsInt() const {
    return 0;
}

bool UHUDLayoutToolPropertyWidget::GetCurrentValueAsBool() const {
    return false;
}

float UHUDLayoutToolPropertyWidget::GetCurrentValue() const {
    return 0.0f;
}

UHUDLayoutToolPropertyWidget::UHUDLayoutToolPropertyWidget() {
    this->MySlider = NULL;
    this->Text_PropertyName = NULL;
    this->Text_PropertyValue = NULL;
    this->PropertyIndex = 0;
}

