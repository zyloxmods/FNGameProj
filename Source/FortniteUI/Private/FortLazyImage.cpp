#include "FortLazyImage.h"

void UFortLazyImage::SetShadowColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UFortLazyImage::SetFortBrushSize(TEnumAsByte<EFortBrushSize::Type> FortBrushSize) {
}

void UFortLazyImage::SetBrushFromItemInstance(const UFortItem* ItemInstance) {
}

void UFortLazyImage::SetBrushFromItemDefinition(const UFortItemDefinition* NewItemDefinition) {
}

UFortLazyImage::UFortLazyImage() {
    this->bApplyDropShadow = false;
    this->ItemDefinition = NULL;
}

