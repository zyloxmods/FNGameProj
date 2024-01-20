#include "FortBrushSizeFunctionLibrary.h"

TEnumAsByte<EFortBrushSize::Type> UFortBrushSizeFunctionLibrary::ShrinkBrushSize(const TEnumAsByte<EFortBrushSize::Type> OriginalBrushSize, const int32 Steps) {
    return EFortBrushSize::VeryVerySmall;
}

TEnumAsByte<EFortBrushSize::Type> UFortBrushSizeFunctionLibrary::GrowBrushSize(const TEnumAsByte<EFortBrushSize::Type> OriginalBrushSize, const int32 Steps) {
    return EFortBrushSize::VeryVerySmall;
}

UFortBrushSizeFunctionLibrary::UFortBrushSizeFunctionLibrary() {
}

