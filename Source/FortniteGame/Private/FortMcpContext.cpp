#include "FortMcpContext.h"

void UFortMcpContext::UpgradeItemRarity(const UFortItem* ItemToUpgrade) {
}

void UFortMcpContext::UpdatePrivacySettings(const FMcpPrivacySettings& NewSettings, const FOnUpdatePrivacySettingsComplete& OnComplete) {
}

void UFortMcpContext::TransmogItem(const UFortConversionControlItemDefinition* ControlKeyItem, const TArray<UFortItem*>& ItemsToSacrifice) {
}

bool UFortMcpContext::StartExpedition(const UFortExpeditionItem* Expedition, const float SuccessChance, const FName SquadId, const float SquadRating, const TArray<UFortItem*>& SlottedSquadItems, const TArray<int32>& SlotIndices, const TArray<float>& ItemRatingMods, float GlobalMod) {
    return false;
}

bool UFortMcpContext::ShouldApplyEUText() {
    return false;
}

void UFortMcpContext::SetItemFavoriteStatus(UFortAccountItem* Item, bool bFavorite, bool ShouldDeferMarking) {
}

void UFortMcpContext::SetBansViewed(FOnBanAcknowledged OnBanAcknowledged) {
}

void UFortMcpContext::SetAffiliateName(const FString& Name, FOnAffilateNameSetAcknowledged OnAffilateNameSetAcknowledged) {
}

void UFortMcpContext::SendFriendCodePlatformMessage(const FFriendCode& FriendCode, const UFortMcpContext::FOnSendFriendCodePlatformMessageComplete& OnCompleteDelegate) {
}

void UFortMcpContext::RemoveGiftBox(const UFortGiftBoxItem* GiftBoxToRemove) {
}

void UFortMcpContext::RegisterForEpicPurchasingDisplay(const FOnEpicPurchasingWidgetDisplay& DisplayCallback, const FOnEpicPurchasingWidgetDismissed& DismissCallback) {
}

void UFortMcpContext::RefundItem(const UFortAccountItem* ItemToConvert) {
}

void UFortMcpContext::RecycleItemBatch(const TArray<UFortItem*>& ItemsToRecycle) {
}

void UFortMcpContext::RecycleItem(const UFortItem* ItemToRecycle) {
}

void UFortMcpContext::ReadPrivacySettings(const FOnReadPrivacySettingsComplete& OnComplete) {
}

void UFortMcpContext::QueryUnredeemedFriendCodes(const UFortMcpContext::FOnQueryUnredeemedFriendCodesComplete& OnCompleteDelegate) {
}

void UFortMcpContext::PurchaseRealMoneyCatalogEntry(const FString& OfferId, const FOnRealMoneyPurchaseComplete& Callback, int32 PriceIndex, int32 Quantity) {
}

EOfferPurchaseError UFortMcpContext::PurchaseOfferAsGift(const FString& OfferId, int32 Quantity, int32 PriceIndex, const TArray<FString>& ReceiverAccountIds, const FString& GiftWrapTemplateId, const FString& UserMessageToRecipients, const FOnGiftOfferComplete& OnComplete) const {
    return EOfferPurchaseError::NoError;
}

EOfferPurchaseError UFortMcpContext::PurchaseOffer(const FString& OfferId, const int32 PriceIndex, const FOnPurchaseOfferComplete& Callback, int32 Quantity, int32 IndexInSection, bool bIsIncarousel, int32 IndexIncarousel, int32 LengthOfCarousel, int32 ColumnIndexInSection, int32 InnerRowIndexInSection, int32 SectionIndex) {
    return EOfferPurchaseError::NoError;
}

void UFortMcpContext::PromoteItem(const UFortItem* ItemToPromote) {
}

void UFortMcpContext::OpenMissionRewards() {
}

void UFortMcpContext::MarkItemSeen(UFortAccountItem* ItemToMarkSeen) {
}

bool UFortMcpContext::IsValid(const FString& OfferId) const {
    return false;
}

bool UFortMcpContext::IsUserOnlyCompetitiveBanned(const FMcpBanInfo& BanInfo) const {
    return false;
}

bool UFortMcpContext::IsUserCurrentlyBanned(const FMcpBanInfo& BanInfo) const {
    return false;
}

void UFortMcpContext::IssueFriendCode(const UFortMcpContext::FOnIssueFriendCodeComplete& OnCompleteDelegate) {
}

bool UFortMcpContext::IsRealMoneyPurchasePending() const {
    return false;
}

bool UFortMcpContext::IsPendingAccountTransfer(FDateTime& EstimatedCompletionMax) const {
    return false;
}

bool UFortMcpContext::IsOwned(const FString& OfferId) const {
    return false;
}

bool UFortMcpContext::IsOfferCompletelyFree(const FString& OfferId, const int32 PriceIndex, int32 Quantity) {
    return false;
}

bool UFortMcpContext::IsLocalPlayersUniqueID(const FUniqueNetIdRepl& PlayerId) const {
    return false;
}

bool UFortMcpContext::IsDailyRewardAvailable(int32& OutMinutesUntilNextReward) const {
    return false;
}

bool UFortMcpContext::IsAllowedConversionIndex(const UFortItem* ItemToConvert, int32 RecipeIndex) {
    return false;
}

bool UFortMcpContext::HasPendingMissionAlertRewards() const {
    return false;
}

bool UFortMcpContext::HasPendingDifficultyIncreaseRewards() const {
    return false;
}

bool UFortMcpContext::HasMfaBeenEnabledAtSomePoint() const {
    return false;
}

bool UFortMcpContext::HasEULAWithKeyDownloaded(const FString& EulaKey) const {
    return false;
}

bool UFortMcpContext::HasEULADownloaded() const {
    return false;
}

void UFortMcpContext::GrantPendingMissionAlertRewards() {
}

void UFortMcpContext::GrantPendingDifficultyIncreaseRewards() {
}

int32 UFortMcpContext::GetXpBoostBalance() const {
    return 0;
}

int32 UFortMcpContext::GetUpgradeXPBalance(const EFortItemType ItemTypeToBeUpgraded) const {
    return 0;
}

FString UFortMcpContext::GetTencentIdString() const {
    return TEXT("");
}

int32 UFortMcpContext::GetSchematicXpBalance() const {
    return 0;
}

int32 UFortMcpContext::GetRestXpBonusPercent() const {
    return 0;
}

int32 UFortMcpContext::GetRestXpBalance() const {
    return 0;
}

bool UFortMcpContext::GetReceivesMTXCurrency() {
    return false;
}

int32 UFortMcpContext::GetPlayersXPPercentContributionToLocalPlayer(const FUniqueNetIdRepl& PlayerId) const {
    return 0;
}

int32 UFortMcpContext::GetPhoenixXpToNextLevel() const {
    return 0;
}

float UFortMcpContext::GetPhoenixLevelProgressRatio() const {
    return 0.0f;
}

int32 UFortMcpContext::GetPersonnelXpBalance() const {
    return 0;
}

int32 UFortMcpContext::GetPersonalXpBonusPercent() const {
    return 0;
}

void UFortMcpContext::GetPendingItemCacheRewards(TArray<UFortItem*>& OutItemCacheRewards) const {
}

int32 UFortMcpContext::GetNumFriendCodesToIssue(const FString& CodeType) const {
    return 0;
}

UFortGiftBoxItem* UFortMcpContext::GetNextMessage() const {
    return NULL;
}

UFortGiftBoxItem* UFortMcpContext::GetNextGiftBox() const {
    return NULL;
}

UFortMcpProfileCampaign* UFortMcpContext::GetMcpProfile() const {
    return NULL;
}

int32 UFortMcpContext::GetMaxPhoenixLevel() const {
    return 0;
}

int32 UFortMcpContext::GetMaxAccountLevel() const {
    return 0;
}

void UFortMcpContext::GetLocalAccountInfo(FFortPrivateAccountInfo& Result) const {
}

UFortMcpProfileSubgame* UFortMcpContext::GetLoadoutProfile() const {
    return NULL;
}

FFortAthenaLoadout UFortMcpContext::GetLoadoutForPlayer(FUniqueNetIdRepl MemberUniqueId) const {
    return FFortAthenaLoadout{};
}

void UFortMcpContext::GetHomeBaseInfoForPlayer(FFortHomeBaseInfo& Result, FUniqueNetIdRepl MemberUniqueId) const {
}

void UFortMcpContext::GetHomeBaseInfo(FFortHomeBaseInfo& Result) const {
}

int32 UFortMcpContext::GetHeroXpBalance() const {
    return 0;
}

int32 UFortMcpContext::GetGroupXpBonusPercent() const {
    return 0;
}

FText UFortMcpContext::GetFriendCodeDisplayName(const FFriendCode& FriendCode) {
    return FText::GetEmpty();
}

FText UFortMcpContext::GetFriendCodeDescription(const FFriendCode& FriendCode) {
    return FText::GetEmpty();
}

FText UFortMcpContext::GetEULAText() const {
    return FText::GetEmpty();
}

UFortHero* UFortMcpContext::GetDefaultHero() const {
    return NULL;
}

int32 UFortMcpContext::GetCurrentPhoenixXp() const {
    return 0;
}

int32 UFortMcpContext::GetCurrentPhoenixLevel() const {
    return 0;
}

void UFortMcpContext::GetCurrentlyViewedAccountInfo(FFortPublicAccountInfo& Result) const {
}

UFortMcpProfileCreative* UFortMcpContext::GetCreativeProfile() const {
    return NULL;
}

UFortMcpProfileCommonPublic* UFortMcpContext::GetCommonPublicMcpProfile() const {
    return NULL;
}

UFortMcpProfileCommonCore* UFortMcpContext::GetCommonCoreMcpProfile() const {
    return NULL;
}

FFortCampaignLoadout UFortMcpContext::GetCampaignLoadoutForPlayer(FUniqueNetIdRepl MemberUniqueId) const {
    return FFortCampaignLoadout{};
}

FMcpBanInfo UFortMcpContext::GetBanInfo() const {
    return FMcpBanInfo{};
}

FTimespan UFortMcpContext::GetBanDuration(const FMcpBanInfo& BanInfo) const {
    return FTimespan{};
}

UFortMcpProfileAthena* UFortMcpContext::GetAthenaProfile() const {
    return NULL;
}

void UFortMcpContext::GetAllResourceCollectors(TArray<UFortCollectedResourceItem*>& ResourceCollectorsOwned) {
}

void UFortMcpContext::GetAllHeroes(TArray<UFortHero*>& Result) const {
}

void UFortMcpContext::GetAllAlterations(TArray<UFortAlterationItem*>& OutAlterations, TEnumAsByte<EFortAlteration::Type> InAlterationType) const {
}

FString UFortMcpContext::GetAffiliateName() const {
    return TEXT("");
}

FString UFortMcpContext::GetAffiliateId() const {
    return TEXT("");
}

UFortAccountItem* UFortMcpContext::GetAccountItemWithDefinition(const UFortAccountItemDefinition* AccountItemDefinition) const {
    return NULL;
}

void UFortMcpContext::DownloadEULAWithKey(const FOnDownloadEULAComplete OnCompleteDelegate, const FString& Key) {
}

void UFortMcpContext::DownloadEULA(const FOnDownloadEULAComplete OnCompleteDelegate) {
}

bool UFortMcpContext::DoesPlatformSupportFriendCodes() {
    return false;
}

void UFortMcpContext::DisplayEmptyStoreDialog() const {
}

void UFortMcpContext::ConvertItem(const UFortItem* ItemToConvert, int32 RecipeIndex) {
}

void UFortMcpContext::CollectExpedition(const UFortExpeditionItem* Expedition) {
}

void UFortMcpContext::ClaimResourceCollectors(const TArray<UFortCollectedResourceItem*>& CollectorTypes) {
}

void UFortMcpContext::ClaimItemCacheReward(UFortItem* ItemCache) {
}

void UFortMcpContext::ClaimAllResourceCollectors() {
}

void UFortMcpContext::CheckAffiliateName(const FString& AffiliateName, FOnCheckAffiliateNameComplete OnCheckAffiliateNameComplete) {
}

EOfferPurchaseError UFortMcpContext::CanPurchaseOffer(const FString& OfferId, const int32 PriceIndex, int32 Quantity) {
    return EOfferPurchaseError::NoError;
}

EOfferPurchaseError UFortMcpContext::CanGiftOffer(const FString& OfferId, const TArray<FString>& ReceiverAccountIds, const FString& GiftWrapTemplateId, const FString& UserMessageToRecipients, const int32 PriceIndex) const {
    return EOfferPurchaseError::NoError;
}

void UFortMcpContext::CancelEpicPurchasingDisplay() {
}

bool UFortMcpContext::AreMissionRewardsAvailable() {
    return false;
}

void UFortMcpContext::ApplyAlteration(UFortAlterableItem* Item, UFortAlterationItem* AlterationToApply) {
}

void UFortMcpContext::AbandonExpedition(const UFortExpeditionItem* Expedition) {
}

UFortMcpContext::UFortMcpContext() {
    MinTimeBetweenFriendCodeRequestsSeconds = 4294967295;
}

