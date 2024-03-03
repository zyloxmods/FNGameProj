#include "FortLazyImage.h"

void UFortLazyImage::SetShadowColorAndOpacity(FLinearColor InColorAndOpacity) {
}

void UFortLazyImage::SetFortBrushSize(TEnumAsByte<EFortBrushSize::Type> FortBrushSize) {
}

void UFortLazyImage::SetBrushFromURL(const FString& CMSImageURL) {
}

void UFortLazyImage::SetBrushFromItemInstance(const UFortItem* ItemInstance) {
}

void UFortLazyImage::SetBrushFromItemDefinition(const UFortItemDefinition* ItemDefinition) {
}

UFortLazyImage::UFortLazyImage() {
    this->bApplyDropShadow = false;
}

