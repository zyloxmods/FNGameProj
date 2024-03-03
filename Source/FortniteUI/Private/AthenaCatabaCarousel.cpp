#include "AthenaCatabaCarousel.h"

void UAthenaCatabaCarousel::SelectPrevItem() {
}

void UAthenaCatabaCarousel::SelectNextItem() {
}

void UAthenaCatabaCarousel::SelectItemAtIndex(int32 ItemIndex) {
}



void UAthenaCatabaCarousel::OnTransitionCompleted() {
}



int32 UAthenaCatabaCarousel::GetSelectedIndex() const {
    return 0;
}

UAthenaCatabaCarousel::UAthenaCatabaCarousel() {
    this->Container_CurrentTile = NULL;
    this->Container_NextTileToShow = NULL;
    this->MobileClickThroughButton = NULL;
    this->HBox_NavigationButtons = NULL;
    this->Text_NextItem = NULL;
    this->Text_PreviousItem = NULL;
    this->Image_AutoScrollProgress = NULL;
    this->EntryBox_Pips = NULL;
    this->SwipePanel_ItemsNavigation = NULL;
    this->ButtonGroup_Pips = NULL;
    this->SelectedItemIndex = 0;
    this->NextTileToShow = NULL;
    this->CurrentTile = NULL;
}

