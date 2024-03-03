#include "AthenaSpatialItemPreviewScreen.h"
#include "FortItemView.h"

UAthenaSpatialItemPreviewScreen::UAthenaSpatialItemPreviewScreen() {
    this->ItemViewObject = CreateDefaultSubobject<UFortItemView>(TEXT("ItemViewObject"));
    this->bEnableItemPreviewRotation = true;
    this->IdleAnimation = NULL;
    this->bLooping = false;
}

