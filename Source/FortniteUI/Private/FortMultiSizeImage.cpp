#include "FortMultiSizeImage.h"

void UFortMultiSizeImage::SetMultiSizeBrush(const FFortMultiSizeBrush& NewMultiSizeBrush) {
}

void UFortMultiSizeImage::SetColorAndOpacity(const FLinearColor& Color) {
}

void UFortMultiSizeImage::SetBrushSize(TEnumAsByte<EFortBrushSize::Type> NewBrushSize) {
}

UFortMultiSizeImage::UFortMultiSizeImage() {
    this->BrushSize = EFortBrushSize::Medium;
}

