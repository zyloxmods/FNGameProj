#include "CommonTextBlock.h"
#include "Templates/SubclassOf.h"

void UCommonTextBlock::SetWrapTextWidth(int32 InWrapTextAt) {
}

void UCommonTextBlock::SetTextCase(bool bUseAllCaps) {
}

void UCommonTextBlock::SetStyle(TSubclassOf<UCommonTextStyle> InStyle) {
}

void UCommonTextBlock::ResetScrollState() {
}

UCommonTextBlock::UCommonTextBlock() {
    this->Style = NULL;
    this->ScrollStyle = NULL;
    this->bDisplayAllCaps = false;
    this->bAutoCollapseWithEmptyText = false;
    this->MobileFontSizeMultiplier = 1;
}

