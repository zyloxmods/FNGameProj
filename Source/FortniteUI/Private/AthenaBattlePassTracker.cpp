#include "AthenaBattlePassTracker.h"

void UAthenaBattlePassTracker::HandleBattlePassPurchaseFlowComplete(bool bClosePresentationScreen) {
}

UAthenaBattlePassTracker::UAthenaBattlePassTracker() {
    this->OutfitsText = FText::FromString(TEXT("Outfits"));
    this->VBucksText = FText::FromString(TEXT("V-Bucks"));
    this->EmotesText = FText::FromString(TEXT("Emotes"));
    this->MoreRewardsText = FText::FromString(TEXT("More Rewards"));
    this->BuyBattlePassTextFormat = FText::FromString(TEXT("Buy the <text color=\"FFF\" size=\"22\" case=\"upper\" fontface=\"black\">Battle Pass</> to claim <text color=\"FFF\" size=\"22\" case=\"upper\" fontface=\"black\">{0} rewards!</>"));
    this->PushedPurchaseScreen = NULL;
    this->RichText_PaidItemsCollected = NULL;
    this->BattlePassItemTracker_01 = NULL;
    this->BattlePassItemTracker_02 = NULL;
    this->BattlePassItemTracker_03 = NULL;
    this->BattlePassItemTracker_04 = NULL;
    this->Button_PurchaseBattlePass = NULL;
}

