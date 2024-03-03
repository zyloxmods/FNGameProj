#include "BattlePassScreen.h"

void UBattlePassScreen::TrackShowAnimationFinished() {
}

void UBattlePassScreen::SpatialInputSuspensionChanged(bool bSupressInput) {
}

bool UBattlePassScreen::ShouldPlayBPVideo(bool bAllowUpdate) {
    return false;
}










UBattlePassScreen::UBattlePassScreen() {
    this->GiftingScreenClass = NULL;
    this->MFAModalClass = NULL;
    this->PurchaseBattlePassScreen = NULL;
    this->CurrentView = EBattlePassView::None;
    this->SeasonData = NULL;
    this->CachedVaultWorld = NULL;
    this->LastViewedItem = NULL;
    this->CyclingCosmeticItem = NULL;
    this->CyclingItem = NULL;
    this->CurrentDisplayedItem = NULL;
    this->PagedRewardTrack = NULL;
    this->BattlePassNavigator = NULL;
    this->AthenaExclusiveRewardBanner = NULL;
    this->BattlePassRewardChallenges = NULL;
    this->Text_Description = NULL;
    this->Text_ItemName = NULL;
    this->ItemRewardTag = NULL;
    this->Text_SetDetails = NULL;
    this->Text_ChapterNumber = NULL;
    this->TextDate_EndTime = NULL;
    this->Button_Close = NULL;
    this->Button_ToggleViewDetails = NULL;
    this->Button_PurchaseBattlePassLevel = NULL;
    this->Button_BuyBattlePass = NULL;
    this->Button_GiftBattlePass = NULL;
    this->Button_ReplayTrailer = NULL;
    this->Button_CloseMobile = NULL;
}

