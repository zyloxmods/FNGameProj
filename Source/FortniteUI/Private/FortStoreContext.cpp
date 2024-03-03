#include "FortStoreContext.h"

void UFortStoreContext::UserViewedAthenaItemShop() {
}

bool UFortStoreContext::StoreHasStarsForSale() {
    return false;
}

void UFortStoreContext::SetSkipOpening(const bool bSkipOpen) {
}

void UFortStoreContext::RealMoneyPurchaseStart() {
}

void UFortStoreContext::RealMoneyPurchaseFinished() {
}

bool UFortStoreContext::PurchaseOpeningComplete() {
    return false;
}

ECardPackPurchaseError UFortStoreContext::MakePurchase(const FCardPackOffer& Offer, UFortCardPackItemDefinition* CardPackDefinition, int32 Quantity) {
    return ECardPackPurchaseError::PendingServerConfirmation;
}

bool UFortStoreContext::MakeChoice(int32 ChoiceIdx, UFortAccountItemDefinition* ChoiceItemDefinition) {
    return false;
}

bool UFortStoreContext::IsWaitingForMcp() const {
    return false;
}

bool UFortStoreContext::IsOpeningOnePack() const {
    return false;
}

bool UFortStoreContext::IsOpeningDirectPack() const {
    return false;
}

bool UFortStoreContext::IsItemMissingFromCollectionBook(const UFortItemDefinition* ItemDefinition) const {
    return false;
}

FTimespan UFortStoreContext::GetTimeUntilMarketplaceRefresh() {
    return FTimespan{};
}

FTimespan UFortStoreContext::GetTimeUntilDailyLimitReset() {
    return FTimespan{};
}

EFortStoreState UFortStoreContext::GetStoreState() const {
    return EFortStoreState::Error;
}

bool UFortStoreContext::GetSkipOpening() const {
    return false;
}

FLinearColor UFortStoreContext::GetRarityColor(EFortRarity Rarity) {
    return FLinearColor{};
}

EFortStoreState UFortStoreContext::GetPreviousState() const {
    return EFortStoreState::Error;
}

int32 UFortStoreContext::GetPackOpeningLimit() const {
    return 0;
}

int32 UFortStoreContext::GetOwnedSurvivorCount(const UFortItem* SurvivorItem) const {
    return 0;
}

int32 UFortStoreContext::GetOwnedItemCount(const UFortItemDefinition* ItemDefinition) const {
    return 0;
}

int32 UFortStoreContext::GetNumUnopenedCardPacksRemaining(const UFortCardPackItemDefinition* PackType, bool bCountChoicePacks) const {
    return 0;
}

TArray<FCard> UFortStoreContext::GetChoiceCards(int32 CardIdx) const {
    return TArray<FCard>();
}

bool UFortStoreContext::GetCard(int32 CardIdx, FCard& ResultOut) const {
    return false;
}

void UFortStoreContext::GetAccountItems(const TArray<UFortAccountItemDefinition*>& AccountItemDefinitions, TArray<UFortAccountItem*>& AccountItems) {
}

void UFortStoreContext::FreshenCache() {
}

void UFortStoreContext::FireInteractionAnalyticsEvent(const FString& Interaction, const FString& Details) const {
}

bool UFortStoreContext::ExitSummary() {
    return false;
}

void UFortStoreContext::ExitRealMoneyStore() {
}

bool UFortStoreContext::ExitCurrencyStore() {
    return false;
}

bool UFortStoreContext::ExitCardPackStore() {
    return false;
}

void UFortStoreContext::EnterRealMoneyStore() {
}

bool UFortStoreContext::EnterCurrencyStore() {
    return false;
}

bool UFortStoreContext::EnterCardPackStore() {
    return false;
}

bool UFortStoreContext::DoesItemSlotExistInCollectionBook(const UFortItemDefinition* ItemDefinition) const {
    return false;
}

void UFortStoreContext::DismissError() {
}

bool UFortStoreContext::ChoiceResultComplete() {
    return false;
}

bool UFortStoreContext::CardPackOpeningComplete() {
    return false;
}

bool UFortStoreContext::CardPackDestroyComplete() {
    return false;
}

bool UFortStoreContext::CardFrontRevealComplete() {
    return false;
}

bool UFortStoreContext::CardFlipComplete() {
    return false;
}

bool UFortStoreContext::CardExitComplete() {
    return false;
}

bool UFortStoreContext::CardEntryComplete() {
    return false;
}

bool UFortStoreContext::CardBackRevealComplete() {
    return false;
}

bool UFortStoreContext::CardAddedToSummaryComplete() {
    return false;
}

void UFortStoreContext::AttemptOpenSinglePack() {
}

void UFortStoreContext::AttemptOpenPackByIndex(int32 CardPackIndex) {
}

void UFortStoreContext::AttemptOpenAllPacks() {
}

UFortStoreContext::UFortStoreContext() {
    this->CardIndex = 0;
    this->LastCardRarity = EFortRarity::Common;
}

