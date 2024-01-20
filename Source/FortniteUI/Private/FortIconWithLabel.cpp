#include "FortIconWithLabel.h"

UFortIconWithLabel::UFortIconWithLabel() {
    this->ShouldShowIcon = true;
    this->ShouldCollapseIconWhenNotShown = true;
    this->IconBrushSize = EFortBrushSize::VeryVerySmall;
    this->ShouldShowLabel = false;
    this->LabelTextStyle = NULL;
}

