#include "SocialNameTextBlock.h"

USocialNameTextBlock::USocialNameTextBlock() {
    this->SocialUser = NULL;
    this->MinDesiredSize = 1;
    this->MaxDesiredSize = 1;
    this->bShowSecondName = true;
    this->PlatformIconDisplayRule = EPlatformIconDisplayRule::Always;
    this->bWrapToNextLine = false;
    this->SecondNameFontSize = 0;
}

