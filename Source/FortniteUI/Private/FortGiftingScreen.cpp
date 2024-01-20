#include "FortGiftingScreen.h"

void UFortGiftingScreen::SetOffer(UFortStoreFrontOfferInfo* NewOfferInfo) {
}




void UFortGiftingScreen::OnGiftingTimerEnded() {
}



void UFortGiftingScreen::HandleMessageChanged(const FText& InText) {
}

void UFortGiftingScreen::FocusFriendsList() {
}

void UFortGiftingScreen::FocusEditableTextMessage() {
}

void UFortGiftingScreen::DynamicHandleGiftSent(bool bSuccess, const TArray<FString>& IneligibleAccounts, const TArray<FString>& ErrorCodes) {
}


UFortGiftingScreen::UFortGiftingScreen() {
    this->TabButtonGroup = NULL;
    this->SelectedGiftBoxButton = NULL;
    this->OfferInfo = NULL;
    this->LocalPlayerDetails = NULL;
    this->PersonalizedMessageLength = 100;
    this->Text_ItemName = NULL;
    this->Image_RecipientCurrency = NULL;
    this->Text_Price = NULL;
    this->Text_GiftCount = NULL;
    this->Text_FriendCount = NULL;
    this->Text_CharCount = NULL;
    this->ListView_Friends = NULL;
    this->Button_Continue = NULL;
    this->Button_Send = NULL;
    this->TileView_GiftBoxes = NULL;
    this->ListView_ChosenRecipients = NULL;
    this->Text_EditableMessage = NULL;
}

