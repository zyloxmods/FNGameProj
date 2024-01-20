#include "FortActorCanvasSlot.h"

void UFortActorCanvasSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UFortActorCanvasSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

void UFortActorCanvasSlot::SetCanAutoRemove(bool bAllowAutoRemove) {
}

UFortActorCanvasSlot::UFortActorCanvasSlot() {
    this->HorizontalAlignment = HAlign_Center;
    this->VerticalAlignment = VAlign_Center;
    this->bCanAutoRemove = true;
}

