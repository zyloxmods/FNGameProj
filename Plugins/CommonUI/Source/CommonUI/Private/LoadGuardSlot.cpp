#include "LoadGuardSlot.h"

void ULoadGuardSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void ULoadGuardSlot::SetPadding(FMargin InPadding) {
}

void ULoadGuardSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

ULoadGuardSlot::ULoadGuardSlot() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}

