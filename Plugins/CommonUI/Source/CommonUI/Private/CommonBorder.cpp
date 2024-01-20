#include "CommonBorder.h"
#include "Templates/SubclassOf.h"

void UCommonBorder::SetStyle(TSubclassOf<UCommonBorderStyle> InStyle) {
}

UCommonBorder::UCommonBorder() {
    this->Style = NULL;
    this->bReducePaddingBySafezone = false;
}

