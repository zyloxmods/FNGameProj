#include "CommonRichTextBlock.h"

UCommonRichTextBlock::UCommonRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->InlineIconDisplayMode = ERichTextInlineIconDisplayMode::IconOnly;
    this->bTintInlineIcon = false;
    this->DefaultTextStyleOverrideClass = NULL;
    this->MobileTextBlockScale = 1;
    this->ScrollStyle = NULL;
    this->bDisplayAllCaps = false;
}

