#include "FortReactiveShopTileText.h"

void UFortReactiveShopTileText::SetMaxCharacterCountBeforeScaling(int32 InMaxCharacterCountBeforeScaling) {
}

int32 UFortReactiveShopTileText::GetMaxCharacterCountBeforeScaling() const {
    return 0;
}

UFortReactiveShopTileText::UFortReactiveShopTileText() {
    this->MaxCharacterCountBeforeScaling = 0;
    this->MaxScaleDownPercentage = 1;
    this->bDebugScaling = false;
    this->InitialFontSize = 1;
}

