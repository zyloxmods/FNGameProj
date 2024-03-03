#include "FortGiftingScreen.h"

void UFortGiftingScreen::SetOffer(UFortStoreFrontOfferInfo* NewOfferInfo) {
}

void UFortGiftingScreen::PostCloseScreen() {
}




void UFortGiftingScreen::OnGiftingTimerEnded() {
}



void UFortGiftingScreen::HandleRequiredMtxPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems) {
}

void UFortGiftingScreen::HandleGiftingPolicyClicked(bool& bPassThrough) {
}

void UFortGiftingScreen::DynamicHandleGiftSent(bool bSuccess, const TArray<FString>& IneligibleAccounts, const TArray<FString>& ErrorCodes) {
}

UFortGiftingScreen::UFortGiftingScreen() {
    this->TabButtonGroup = NULL;
    this->OfferInfo = NULL;
    this->RequiredOfferInfo = NULL;
    this->LocalPlayerDetails = NULL;
    this->Text_ItemName = NULL;
    this->Image_RecipientCurrency = NULL;
    this->Text_Price = NULL;
    this->Text_GiftCount = NULL;
    this->Button_Continue = NULL;
    this->Button_Send = NULL;
    this->ListView_ChosenRecipients = NULL;
    this->Activatable_PersonalizeTab = NULL;
    this->Activatable_RecipientsTab = NULL;
}

