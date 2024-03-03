#include "AthenaCatabaSection.h"


void UAthenaCatabaSection::HandleUserScrolled(float InCurrentScrollOffset) {
}

UAthenaCatabaSection::UAthenaCatabaSection() {
    this->OriginalScale = 1;
    this->SmallScale = 1;
    this->EntryBox_OfferEntries = NULL;
    this->ScrollBox_Offers = NULL;
    this->Text_Title = NULL;
    this->HBox_Timer = NULL;
    this->Text_TimeRemaining = NULL;
    this->CircleArrowButton_Next = NULL;
    this->CircleArrowButton_Previous = NULL;
    this->ScaleBox_Offers = NULL;
}

