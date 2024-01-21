#include "FortRichTextBlock.h"

void UFortRichTextBlock::SetText(FText InText) {
}

FString UFortRichTextBlock::EscapeStringForRichText(const FString& inString) {
    return TEXT("");
}

UFortRichTextBlock::UFortRichTextBlock() {
    this->StyleSet = NULL;
    this->WrapTextAt = 0.00f;
    this->AutoWrapText = false;
    this->Justification = ETextJustify::Left;
    this->DisableTouchInput = false;
    this->AllowContextMenu = true;
    this->KeybindWidgetClass = NULL;
}

