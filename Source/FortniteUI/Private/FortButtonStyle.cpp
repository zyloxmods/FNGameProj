#include "FortButtonStyle.h"

FMargin UFortButtonStyle::GetMarginBySizeFromMultiSizeMargin(const FFortMultiSizeMargin& MultiSizeMargin, TEnumAsByte<EFortBrushSize::Type> Size) {
    return FMargin{};
}

FSlateFontInfo UFortButtonStyle::GetFontBySizeFromMultiSizeFont(const FFortMultiSizeFont& MultiSizeFont, TEnumAsByte<EFortBrushSize::Type> Size) {
    return FSlateFontInfo{};
}

FSlateFontInfo UFortButtonStyle::GetFontBySize(TEnumAsByte<EFortBrushSize::Type> Size) const {
    return FSlateFontInfo{};
}

FMargin UFortButtonStyle::GetCustomPaddingBySize(TEnumAsByte<EFortBrushSize::Type> Size) const {
    return FMargin{};
}

FMargin UFortButtonStyle::GetButtonPaddingBySize(TEnumAsByte<EFortBrushSize::Type> Size) const {
    return FMargin{};
}

FSlateBrush UFortButtonStyle::GetBrushBySizeFromMultiSizeBrush(const FFortMultiSizeBrush& MultiSizeBrush, TEnumAsByte<EFortBrushSize::Type> Size) {
    return FSlateBrush{};
}

UFortButtonStyle::UFortButtonStyle() {
}

