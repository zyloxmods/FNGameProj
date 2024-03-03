#include "FortItemPreviewScreen.h"
#include "FortItemView.h"

void UFortItemPreviewScreen::ShowItemDetails() {
}


void UFortItemPreviewScreen::HideItemDetails() {
}

UFortItemPreviewScreen::UFortItemPreviewScreen() {
    this->AnimationToHideItemInfo = NULL;
    this->bAutoShowDetails = true;
    this->bItemDetailsHidden = true;
    this->HideItemInfoHeaderDurationSecs = 1;
    this->AllowItemRotation = true;
    this->AllowItemZooming = true;
    this->FrontEndCamera = EFrontEndCamera::Invalid;
    this->PreviewSceneChanger = NULL;
    this->ItemViewObject = CreateDefaultSubobject<UFortItemView>(TEXT("ItemViewObject"));
    this->bAllowItemRotation = true;
    this->bAllowItemZooming = true;
    this->CameraEntryTransitionDuration = 1;
    this->CameraEntryTransitionCurve = NULL;
    this->Widget_CameraFrame = NULL;
    this->Button_PreviewAction = NULL;
}

