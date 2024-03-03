#include "CommonTextStyle.h"

void UCommonTextStyle::GetStrikeBrush(FSlateBrush& OutStrikeBrush) const {
}

void UCommonTextStyle::GetShadowOffset(FVector2D& OutShadowOffset) const {
}

void UCommonTextStyle::GetShadowColor(FLinearColor& OutColor) const {
}

void UCommonTextStyle::GetMargin(FMargin& OutMargin) const {
}

float UCommonTextStyle::GetLineHeightPercentage() const {
    return 0.0f;
}

void UCommonTextStyle::GetFont(FSlateFontInfo& OutFont) const {
}

void UCommonTextStyle::GetColor(FLinearColor& OutColor) const {
}

UCommonTextStyle::UCommonTextStyle() {
    this->bUsesDropShadow = false;
    this->LineHeightPercentage = 1;
}

