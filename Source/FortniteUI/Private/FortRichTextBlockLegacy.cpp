#include "FortRichTextBlockLegacy.h"

void UFortRichTextBlockLegacy::SetText(FText InText) {
}

FString UFortRichTextBlockLegacy::EscapeStringForRichText(const FString& inString) {
    return TEXT("");
}

UFortRichTextBlockLegacy::UFortRichTextBlockLegacy() {
    this->StyleSet = NULL;
    this->WrapTextAt = 1;
    this->AutoWrapText = false;
    this->Justification = ETextJustify::Left;
    this->DisableTouchInput = false;
    this->AllowContextMenu = true;
    this->KeybindWidgetClass = NULL;
}

