#include "FortStoreFrontOfferDetailsWidgetBase.h"


void UFortStoreFrontOfferDetailsWidgetBase::ShowVaultItemFromItemReward(UFortAthenaReward* InItemReward) {
}

void UFortStoreFrontOfferDetailsWidgetBase::ShowVaultItem(const UFortItem* InItemToRepresent) {
}


void UFortStoreFrontOfferDetailsWidgetBase::ShowPurchasedOverlayWidget(int32 QuantityPurchased, const TArray<FPurchasedItemInfo> PurchasedItems, bool bShowAsRefund, const FString& OfferId) {
}

void UFortStoreFrontOfferDetailsWidgetBase::ShowItemPresentationScreen(const TArray<FPurchasedItemInfo>& PurchasedItems) {
}

bool UFortStoreFrontOfferDetailsWidgetBase::ShouldShowReloadVBucks() {
    return false;
}

bool UFortStoreFrontOfferDetailsWidgetBase::ShouldShowDynamicReloadVBucks() {
    return false;
}

bool UFortStoreFrontOfferDetailsWidgetBase::ShouldHavePurchaseConfirmation() const {
    return false;
}

bool UFortStoreFrontOfferDetailsWidgetBase::ShouldDisplayOfferPurchasedOverlay() const {
    return false;
}

void UFortStoreFrontOfferDetailsWidgetBase::SetupOffer(UFortStoreFrontOfferInfo* InOfferData) {
}

void UFortStoreFrontOfferDetailsWidgetBase::SetStoreRoot(UFortMtxStoreRootBase* InStoreRoot) {
}

void UFortStoreFrontOfferDetailsWidgetBase::SetShouldAllowItemViewModeAction(const bool Value) {
}

void UFortStoreFrontOfferDetailsWidgetBase::SetSecondaryItem(const UFortItem* Item) {
}

void UFortStoreFrontOfferDetailsWidgetBase::SetPagedItems(const TArray<UFortStoreFrontOfferInfo*>& InPagedItems) {
}

void UFortStoreFrontOfferDetailsWidgetBase::SetItemRewardSecondaryItem(const UFortItemDefinition* ItemDef, TArray<FFortItemQuantityPair> AllItemQuantityPairs, UFortAthenaReward* RewardWidget) {
}

void UFortStoreFrontOfferDetailsWidgetBase::SetIsInItemViewMode(const bool Value) {
}

void UFortStoreFrontOfferDetailsWidgetBase::SendUndoMtxReturnedAnalytic(const FString& Interaction, const FString& PurchaseId, const int32 MtxReturned) const {
}

void UFortStoreFrontOfferDetailsWidgetBase::SendShopInteractionAnalytic(const FString& Interaction) const {
}

void UFortStoreFrontOfferDetailsWidgetBase::SendSeasonPassInteractionAnalytic(const FString& Interaction) const {
}

void UFortStoreFrontOfferDetailsWidgetBase::SendReloadMtxPurchaseSKUAnalytic() const {
}

void UFortStoreFrontOfferDetailsWidgetBase::SendRealMoneyStoreInteractionAnalytic(const FString& Interaction) const {
}

void UFortStoreFrontOfferDetailsWidgetBase::SendRealMoneyPurchase(int32 PriceIndex, int32 Quantity) {
}

void UFortStoreFrontOfferDetailsWidgetBase::SendingToMainStore() {
}

void UFortStoreFrontOfferDetailsWidgetBase::RequestExternalPurchase(int32 PriceIndex, int32 Quantity) {
}

void UFortStoreFrontOfferDetailsWidgetBase::RegisterItemRewardInteraction(UFortAthenaReward* InItemReward) {
}

void UFortStoreFrontOfferDetailsWidgetBase::RefreshUndoState(UFortStoreFrontOfferInfo* OfferPurchased) {
}

void UFortStoreFrontOfferDetailsWidgetBase::RefreshOfferInfo() {
}

void UFortStoreFrontOfferDetailsWidgetBase::PurchaseOffer(const FOnPurchaseOfferComplete& Callback, int32 Quantity) {
}






void UFortStoreFrontOfferDetailsWidgetBase::OnEnterViewModeActionCommitted(bool& PassThrough) {
}


void UFortStoreFrontOfferDetailsWidgetBase::HandleVaultItemsViewed(const TArray<UFortItem*>& ItemsShown) {
}

void UFortStoreFrontOfferDetailsWidgetBase::HandleReloadStaticMtxClicked() {
}

void UFortStoreFrontOfferDetailsWidgetBase::HandleReloadDynamicMtxClicked() {
}

void UFortStoreFrontOfferDetailsWidgetBase::HandleRealMoneyPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems) {
}

void UFortStoreFrontOfferDetailsWidgetBase::HandleGiftingItemPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId) {
}

void UFortStoreFrontOfferDetailsWidgetBase::HandleCurrentlyViewedAccountInfoChanged(FFortPublicAccountInfo NewInfo) {
}

void UFortStoreFrontOfferDetailsWidgetBase::HandleBattlePassPurchaseComplete(bool bSuccess) {
}

int32 UFortStoreFrontOfferDetailsWidgetBase::GetPriceIndexToShow() {
    return 0;
}

UFortStoreFrontOfferInfo* UFortStoreFrontOfferDetailsWidgetBase::GetOfferInfoById(const FString& OfferId) {
    return NULL;
}

UFortStoreFrontOfferInfo* UFortStoreFrontOfferDetailsWidgetBase::GetOfferInfo() const {
    return NULL;
}

bool UFortStoreFrontOfferDetailsWidgetBase::FindItemQuantityPair(UFortItemDefinition* ItemDefinition, TArray<FFortItemQuantityPair>& InItemQuantityPairs, FFortItemQuantityPair& OutItemQuantity) {
    return false;
}

void UFortStoreFrontOfferDetailsWidgetBase::DeactivateUndoButton() {
}

void UFortStoreFrontOfferDetailsWidgetBase::ConfirmUndo() {
}


UFortStoreFrontOfferDetailsWidgetBase::UFortStoreFrontOfferDetailsWidgetBase() {
    this->IsInItemViewMode = false;
    this->ShouldAllowItemViewModeAction = true;
    this->bImmediatelyPurchased = false;
    this->OfferData = NULL;
    this->Picker_VariantSelector = NULL;
    this->TextUndoAvailability = NULL;
    this->Text_UndoBottomBarWarning = NULL;
    this->Button_Undo = NULL;
    this->Text_CosmeticWarning = NULL;
    this->ProgressModalClass = NULL;
    this->PurchaseModalClass = NULL;
    this->ProgressModal = NULL;
    this->ItemToRepresent = NULL;
    this->SecondaryItem = NULL;
    this->TimeBetweenVariantsRestart = 1;
    this->TimeBetweenVariants = 1;
    this->bShowRefundWarningWhileMatchmaking = true;
    this->bShowRefundWarningWhileInZone = true;
}

