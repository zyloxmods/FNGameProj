#include "FortAthenaMOTDWidget.h"





void UFortAthenaMOTDWidget::SelectNewsByIndex(int32 Index) {
}



bool UFortAthenaMOTDWidget::PlayFirstAutoPlayVideo() {
    return false;
}




void UFortAthenaMOTDWidget::NavigateToRightNews() {
}

void UFortAthenaMOTDWidget::NavigateToLeftNews() {
}

void UFortAthenaMOTDWidget::HandleSelectedButtonChanged(UCommonButton* SelectedButton, int32 ButtonIndex) {
}


void UFortAthenaMOTDWidget::HandleImageLoaded() {
}

int32 UFortAthenaMOTDWidget::GetNewsCount() const {
    return 0;
}

FAthenaNewsEntry UFortAthenaMOTDWidget::GetNewsByIndex(int32 Index) const {
    return FAthenaNewsEntry{};
}

FAthenaNewsEntry UFortAthenaMOTDWidget::BP_GetSelectedNews() const {
    return FAthenaNewsEntry{};
}

bool UFortAthenaMOTDWidget::AutoPlayedVideo() const {
    return false;
}

UFortAthenaMOTDWidget::UFortAthenaMOTDWidget() {
    this->MOTDButtonGroup = NULL;
    this->MOTDTileClass = NULL;
    this->NewVideoPlayerClass = NULL;
    this->ItemViewClass = NULL;
    this->RMTItemViewClass = NULL;
    this->BattlePassPurchaseScreenClass = NULL;
    this->ActivationFrontendCamera = EFrontEndCamera::Invalid;
    this->bShowMOTDAfterInteraction = true;
    this->Button_SpecialAction = NULL;
    this->Button_NormalAction = NULL;
    this->CMSImage_SelectedNewsImage = NULL;
    this->CMSImage_SelectedNewsImage_Blurred = NULL;
    this->RichTextBlock_SelectedNewsTitle = NULL;
    this->RichTextBlock_SelectedNewsBody = NULL;
    this->Button_Close = NULL;
    this->EntryBox_MOTDEntries = NULL;
}

