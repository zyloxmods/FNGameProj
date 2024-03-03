#include "BattlePassPurchaseScreen.h"

void UBattlePassPurchaseScreen::RemoveSelfFromWidgetStack(bool Succeed) {
}




void UBattlePassPurchaseScreen::HandleBattlePassPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId) {
}

UBattlePassPurchaseScreen::UBattlePassPurchaseScreen() {
    this->SeasonData = NULL;
    this->CurrentSeasonLevel = 0;
    this->bDoesOwnBattlePass = false;
    this->BattlePassOfferDetailsClass = NULL;
    this->GiftingScreenClass = NULL;
    this->MFAModalClass = NULL;
    this->PurchaseCompleteModal = NULL;
    this->GiftBattlePassButton = NULL;
    this->MoreInfo = NULL;
    this->BackButton = NULL;
    this->Button_PurchaseConfirmation = NULL;
    this->Button_DeclinePurchase = NULL;
    this->Button_CloseMobile = NULL;
    this->Button_PurchaseBattlePass = NULL;
    this->Button_PurchaseBattlePassBundle = NULL;
    this->SelectedButton = NULL;
}

