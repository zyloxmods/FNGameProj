#include "FortSeasonLevelConfirmationScreen.h"



void UFortSeasonLevelConfirmationScreen::HandlePurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId) {
}

void UFortSeasonLevelConfirmationScreen::HandleCloseScreen(bool& bPassThrough) {
}

bool UFortSeasonLevelConfirmationScreen::CanAffordTierPurchase() const {
    return false;
}

UFortSeasonLevelConfirmationScreen::UFortSeasonLevelConfirmationScreen() {
    this->Mobile_CloseButton = NULL;
    this->Button_IncreasePurchaseTier = NULL;
    this->Button_DecreasePurchaseTier = NULL;
    this->Text_Header = NULL;
    this->Text_RewardCount = NULL;
    this->Text_PurchasePrice = NULL;
    this->EntryBox_RewardIcons = NULL;
    this->Button_Purchase = NULL;
    this->Widget_Purchasing = NULL;
    this->Switcher_PurchaseState = NULL;
}

