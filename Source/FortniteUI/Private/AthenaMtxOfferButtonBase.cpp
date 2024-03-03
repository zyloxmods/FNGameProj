#include "AthenaMtxOfferButtonBase.h"

void UAthenaMtxOfferButtonBase::HandleMtxPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems) {
}

UAthenaMtxOfferButtonBase::UAthenaMtxOfferButtonBase() {
    this->OfferData = NULL;
    this->Text_MtxAmount = NULL;
    this->Text_RealMoneyPrice = NULL;
    this->OptionalSwitcher_CurrencyIcons = NULL;
    this->OptionalIMG_StarterKit = NULL;
    this->LoadGuardCurrencySpinner = NULL;
}

