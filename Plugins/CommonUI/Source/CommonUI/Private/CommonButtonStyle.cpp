#include "CommonButtonStyle.h"

UCommonTextStyle* UCommonButtonStyle::GetSelectedTextStyle() const {
    return NULL;
}

void UCommonButtonStyle::GetSelectedPressedBrush(FSlateBrush& Brush) const {
}

UCommonTextStyle* UCommonButtonStyle::GetSelectedHoveredTextStyle() const {
    return NULL;
}

void UCommonButtonStyle::GetSelectedHoveredBrush(FSlateBrush& Brush) const {
}

void UCommonButtonStyle::GetSelectedBaseBrush(FSlateBrush& Brush) const {
}

UCommonTextStyle* UCommonButtonStyle::GetNormalTextStyle() const {
    return NULL;
}

void UCommonButtonStyle::GetNormalPressedBrush(FSlateBrush& Brush) const {
}

UCommonTextStyle* UCommonButtonStyle::GetNormalHoveredTextStyle() const {
    return NULL;
}

void UCommonButtonStyle::GetNormalHoveredBrush(FSlateBrush& Brush) const {
}

void UCommonButtonStyle::GetNormalBaseBrush(FSlateBrush& Brush) const {
}

void UCommonButtonStyle::GetMaterialBrush(FSlateBrush& Brush) const {
}

UCommonTextStyle* UCommonButtonStyle::GetDisabledTextStyle() const {
    return NULL;
}

void UCommonButtonStyle::GetDisabledBrush(FSlateBrush& Brush) const {
}

void UCommonButtonStyle::GetCustomPadding(FMargin& OutCustomPadding) const {
}

void UCommonButtonStyle::GetButtonPadding(FMargin& OutButtonPadding) const {
}

UCommonButtonStyle::UCommonButtonStyle() {
    this->bSingleMaterial = false;
    this->MinWidth = 0;
    this->MinHeight = 0;
    this->NormalTextStyle = NULL;
    this->NormalHoveredTextStyle = NULL;
    this->SelectedTextStyle = NULL;
    this->SelectedHoveredTextStyle = NULL;
    this->DisabledTextStyle = NULL;
}

