#include "FortTierIndicator.h"

void UFortTierIndicator::SetPreviewState(int32 TierIncrease) {
}

void UFortTierIndicator::SetItemToRepresent(UFortItem* NewItemToRepresent) {
}

void UFortTierIndicator::SetInterPipPadding(float NewInterPipPadding) {
}

void UFortTierIndicator::SetBrushSize(TEnumAsByte<EFortBrushSize::Type> NewBrushSize) {
}

void UFortTierIndicator::ClearPreviewState() {
}

UFortTierIndicator::UFortTierIndicator() {
    this->BrushSize = EFortBrushSize::VeryVerySmall;
    this->InterPipPadding = 1;
}

