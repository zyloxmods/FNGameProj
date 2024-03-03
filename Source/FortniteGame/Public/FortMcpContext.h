#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "CurrentlyViewedAccountInfoChangedDelegateDelegate.h"
#include "DailyRewardScheduleTokenDelegateDelegate.h"
#include "EFortAlteration.h"
#include "EFortItemType.h"
#include "EOfferPurchaseError.h"
#include "FortAthenaLoadout.h"
#include "FortCampaignLoadout.h"
#include "FortConversionBeginDelegateDelegate.h"
#include "FortConversionCompleteDelegateDelegate.h"
#include "FortDifficultyIncreaseRewardsClaimFailedDelegate.h"
#include "FortHomeBaseInfo.h"
#include "FortItemCacheRewardsClaimFailedDelegate.h"
#include "FortItemCacheRewardsClaimedDelegate.h"
#include "FortMissionRewardsOpenFailedDelegate.h"
#include "FortMissionRewardsOpenedDelegate.h"
#include "FortPrivateAccountInfo.h"
#include "FortPromotionCompleteDelegateDelegate.h"
#include "FortPublicAccountInfo.h"
#include "FortResourceCollectorClaimedDelegate.h"
#include "FortTransmogCompleteDelegateDelegate.h"
#include "FortTransmogFailedDelegateDelegate.h"
#include "FortUpgradeRarityBeginDelegateDelegate.h"
#include "FortUpgradeRarityCompleteDelegateDelegate.h"
#include "FounderChangeDelegateDelegate.h"
#include "FriendCode.h"
#include "HeroesChangedDelegateDelegate.h"
#include "LocalAccountInfoChangedDelegateDelegate.h"
#include "McpBanInfo.h"
#include "McpPrivacySettings.h"
#include "OnAffilateNameSetAcknowledgedDelegate.h"
#include "OnBanAcknowledgedDelegate.h"
#include "OnCheckAffiliateNameCompleteDelegate.h"
#include "OnDownloadEULACompleteDelegate.h"
#include "OnEpicPurchasingWidgetDismissedDelegate.h"
#include "OnEpicPurchasingWidgetDisplayDelegate.h"
#include "OnGiftBoxRemovedDelegate.h"
#include "OnGiftOfferCompleteDelegate.h"
#include "OnLiveStreamingQuestWindowEndsDelegate.h"
#include "OnLiveStreamingQuestWindowSelectedViewersDelegate.h"
#include "OnLiveStreamingQuestWindowStartsDelegate.h"
#include "OnLoginFlowWidgetDismissedDelegate.h"
#include "OnLoginFlowWidgetDisplayDelegate.h"
#include "OnPhoenixXpChangeDelegateDelegate.h"
#include "OnPurchaseOfferCompleteDelegate.h"
#include "OnPurchaseOfferCompleteMultiDelegate.h"
#include "OnReadPrivacySettingsCompleteDelegate.h"
#include "OnRealMoneyPurchaseCompleteDelegate.h"
#include "OnRealMoneyPurchaseCompleteMultiDelegate.h"
#include "OnUpdatePrivacySettingsCompleteDelegate.h"
#include "XpBoostChangeDelegateDelegate.h"
#include "FortMcpContext.generated.h"

class UFortAccountItem;
class UFortAccountItemDefinition;
class UFortAlterableItem;
class UFortAlterationItem;
class UFortCollectedResourceItem;
class UFortConversionControlItemDefinition;
class UFortExpeditionItem;
class UFortGiftBoxItem;
class UFortHero;
class UFortItem;
class UFortMcpProfileAthena;
class UFortMcpProfileCampaign;
class UFortMcpProfileCommonCore;
class UFortMcpProfileCommonPublic;
class UFortMcpProfileCreative;
class UFortMcpProfileSubgame;

UCLASS(Blueprintable, MinimalAPI, NonTransient, Config=Game)
class UFortMcpContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSendFriendCodePlatformMessageComplete, bool, bMessageSent);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnQueryUnredeemedFriendCodesComplete, bool, bSuccess, const TArray<FFriendCode>&, FriendCodes);
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnIssueFriendCodeComplete, bool, bSuccess, const FFriendCode&, FriendCode);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeroesChangedDelegate OnHeroesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGiftBoxRemoved OnGiftBoxRemovedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FXpBoostChangeDelegate OnXpBoostChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFounderChangeDelegate OnFounderGranted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDailyRewardScheduleTokenDelegate OnDailyRewardTokenGranted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPhoenixXpChangeDelegate OnPhoenixXpChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalAccountInfoChangedDelegate OnLocalAccountInfoChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrentlyViewedAccountInfoChangedDelegate OnCurrentlyViewedAccountInfoChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMcpPrivacySettings PrivacySettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMissionRewardsOpened OnMissionRewardsOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMissionRewardsOpenFailed OnMissionRewardsOpenFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMissionRewardsOpened OnMissionAlertRewardsOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMissionRewardsOpened OnDifficultyIncreaseRewardsClaimed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDifficultyIncreaseRewardsClaimFailed OnDifficultyIncreaseRewardsClaimFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemCacheRewardsClaimed OnItemCacheRewardsClaimed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemCacheRewardsClaimFailed OnItemCacheRewardsClaimFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortResourceCollectorClaimed OnResourceCollectorClaimed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortConversionBeginDelegate OnConversionBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortConversionCompleteDelegate OnConversionComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUpgradeRarityBeginDelegate OnRarityUpgradeBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUpgradeRarityCompleteDelegate OnRarityUpgradeComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPromotionCompleteDelegate OnPromotionComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTransmogCompleteDelegate OnTransmogComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTransmogFailedDelegate OnTransmogFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortConversionBeginDelegate OnRefundBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortConversionCompleteDelegate OnRefundComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLiveStreamingQuestWindowStarts OnLiveStreamingQuestWindowStarts;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLiveStreamingQuestWindowEnds OnLiveStreamingQuestWindowEnds;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLiveStreamingQuestWindowSelectedViewers OnLiveStreamingQuestWindowSelectedViewers;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPurchaseOfferCompleteMulti OnOfferPurchaseComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRealMoneyPurchaseCompleteMulti OnRealMoneyPurchaseComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFriendCode> CachedFriendCodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FOnQueryUnredeemedFriendCodesComplete> PendingFriendCodeOnCompleteDelegates;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinTimeBetweenFriendCodeRequestsSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FriendCodeMessageBody;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EUCountryCodes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEpicPurchasingWidgetDisplay DisplayPurchaseWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEpicPurchasingWidgetDismissed DismissPurchaseWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoginFlowWidgetDisplay DisplayLoginWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoginFlowWidgetDismissed DismissLoginWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoginFlowWidgetDisplay DisplayAccountCreationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoginFlowWidgetDismissed DismissAccountCreationWidget;
    
public:
    UFortMcpContext();
    UFUNCTION(BlueprintCallable)
    void UpgradeItemRarity(const UFortItem* ItemToUpgrade);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePrivacySettings(const FMcpPrivacySettings& NewSettings, const FOnUpdatePrivacySettingsComplete& OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void TransmogItem(const UFortConversionControlItemDefinition* ControlKeyItem, const TArray<UFortItem*>& ItemsToSacrifice);
    
    UFUNCTION(BlueprintCallable)
    bool StartExpedition(const UFortExpeditionItem* Expedition, const float SuccessChance, const FName SquadId, const float SquadRating, const TArray<UFortItem*>& SlottedSquadItems, const TArray<int32>& SlotIndices, const TArray<float>& ItemRatingMods, float GlobalMod);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldApplyEUText();
    
    UFUNCTION(BlueprintCallable)
    void SetItemFavoriteStatus(UFortAccountItem* Item, bool bFavorite, bool ShouldDeferMarking);
    
    UFUNCTION(BlueprintCallable)
    void SetBansViewed(FOnBanAcknowledged OnBanAcknowledged);
    
    UFUNCTION(BlueprintCallable)
    void SetAffiliateName(const FString& Name, FOnAffilateNameSetAcknowledged OnAffilateNameSetAcknowledged);
    
    UFUNCTION(BlueprintCallable)
    void SendFriendCodePlatformMessage(const FFriendCode& FriendCode, const UFortMcpContext::FOnSendFriendCodePlatformMessageComplete& OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGiftBox(const UFortGiftBoxItem* GiftBoxToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RegisterForEpicPurchasingDisplay(const FOnEpicPurchasingWidgetDisplay& DisplayCallback, const FOnEpicPurchasingWidgetDismissed& DismissCallback);
    
    UFUNCTION(BlueprintCallable)
    void RefundItem(const UFortAccountItem* ItemToConvert);
    
    UFUNCTION(BlueprintCallable)
    void RecycleItemBatch(const TArray<UFortItem*>& ItemsToRecycle);
    
    UFUNCTION(BlueprintCallable)
    void RecycleItem(const UFortItem* ItemToRecycle);
    
    UFUNCTION(BlueprintCallable)
    void ReadPrivacySettings(const FOnReadPrivacySettingsComplete& OnComplete);
    
    UFUNCTION(BlueprintCallable)
    void QueryUnredeemedFriendCodes(const UFortMcpContext::FOnQueryUnredeemedFriendCodesComplete& OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable)
    void PurchaseRealMoneyCatalogEntry(const FString& OfferId, const FOnRealMoneyPurchaseComplete& Callback, int32 PriceIndex, int32 Quantity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOfferPurchaseError PurchaseOfferAsGift(const FString& OfferId, int32 Quantity, int32 PriceIndex, const TArray<FString>& ReceiverAccountIds, const FString& GiftWrapTemplateId, const FString& UserMessageToRecipients, const FOnGiftOfferComplete& OnComplete) const;
    
    UFUNCTION(BlueprintCallable)
    EOfferPurchaseError PurchaseOffer(const FString& OfferId, const int32 PriceIndex, const FOnPurchaseOfferComplete& Callback, int32 Quantity, int32 IndexInSection, bool bIsIncarousel, int32 IndexIncarousel, int32 LengthOfCarousel, int32 ColumnIndexInSection, int32 InnerRowIndexInSection, int32 SectionIndex);
    
    UFUNCTION(BlueprintCallable)
    void PromoteItem(const UFortItem* ItemToPromote);
    
    UFUNCTION(BlueprintCallable)
    void OpenMissionRewards();
    
    UFUNCTION(BlueprintCallable)
    void MarkItemSeen(UFortAccountItem* ItemToMarkSeen);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValid(const FString& OfferId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUserOnlyCompetitiveBanned(const FMcpBanInfo& BanInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUserCurrentlyBanned(const FMcpBanInfo& BanInfo) const;
    
    UFUNCTION(BlueprintCallable)
    void IssueFriendCode(const UFortMcpContext::FOnIssueFriendCodeComplete& OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRealMoneyPurchasePending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingAccountTransfer(FDateTime& EstimatedCompletionMax) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwned(const FString& OfferId) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsOfferCompletelyFree(const FString& OfferId, const int32 PriceIndex, int32 Quantity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayersUniqueID(const FUniqueNetIdRepl& PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDailyRewardAvailable(int32& OutMinutesUntilNextReward) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAllowedConversionIndex(const UFortItem* ItemToConvert, int32 RecipeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingMissionAlertRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPendingDifficultyIncreaseRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMfaBeenEnabledAtSomePoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEULAWithKeyDownloaded(const FString& EulaKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEULADownloaded() const;
    
    UFUNCTION(BlueprintCallable)
    void GrantPendingMissionAlertRewards();
    
    UFUNCTION(BlueprintCallable)
    void GrantPendingDifficultyIncreaseRewards();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetXpBoostBalance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpgradeXPBalance(const EFortItemType ItemTypeToBeUpgraded) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTencentIdString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSchematicXpBalance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRestXpBonusPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRestXpBalance() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetReceivesMTXCurrency();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayersXPPercentContributionToLocalPlayer(const FUniqueNetIdRepl& PlayerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPhoenixXpToNextLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPhoenixLevelProgressRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPersonnelXpBalance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPersonalXpBonusPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPendingItemCacheRewards(TArray<UFortItem*>& OutItemCacheRewards) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumFriendCodesToIssue(const FString& CodeType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortGiftBoxItem* GetNextMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortGiftBoxItem* GetNextGiftBox() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortMcpProfileCampaign* GetMcpProfile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPhoenixLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAccountLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLocalAccountInfo(FFortPrivateAccountInfo& Result) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortMcpProfileSubgame* GetLoadoutProfile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortAthenaLoadout GetLoadoutForPlayer(FUniqueNetIdRepl MemberUniqueId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHomeBaseInfoForPlayer(FFortHomeBaseInfo& Result, FUniqueNetIdRepl MemberUniqueId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHomeBaseInfo(FFortHomeBaseInfo& Result) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeroXpBalance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGroupXpBonusPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFriendCodeDisplayName(const FFriendCode& FriendCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFriendCodeDescription(const FFriendCode& FriendCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetEULAText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortHero* GetDefaultHero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPhoenixXp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPhoenixLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentlyViewedAccountInfo(FFortPublicAccountInfo& Result) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortMcpProfileCreative* GetCreativeProfile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortMcpProfileCommonPublic* GetCommonPublicMcpProfile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortMcpProfileCommonCore* GetCommonCoreMcpProfile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFortCampaignLoadout GetCampaignLoadoutForPlayer(FUniqueNetIdRepl MemberUniqueId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMcpBanInfo GetBanInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetBanDuration(const FMcpBanInfo& BanInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortMcpProfileAthena* GetAthenaProfile() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAllResourceCollectors(TArray<UFortCollectedResourceItem*>& ResourceCollectorsOwned);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllHeroes(TArray<UFortHero*>& Result) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllAlterations(TArray<UFortAlterationItem*>& OutAlterations, TEnumAsByte<EFortAlteration::Type> InAlterationType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAffiliateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAffiliateId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAccountItem* GetAccountItemWithDefinition(const UFortAccountItemDefinition* AccountItemDefinition) const;
    
    UFUNCTION(BlueprintCallable)
    void DownloadEULAWithKey(const FOnDownloadEULAComplete OnCompleteDelegate, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void DownloadEULA(const FOnDownloadEULAComplete OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool DoesPlatformSupportFriendCodes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DisplayEmptyStoreDialog() const;
    
    UFUNCTION(BlueprintCallable)
    void ConvertItem(const UFortItem* ItemToConvert, int32 RecipeIndex);
    
    UFUNCTION(BlueprintCallable)
    void CollectExpedition(const UFortExpeditionItem* Expedition);
    
    UFUNCTION(BlueprintCallable)
    void ClaimResourceCollectors(const TArray<UFortCollectedResourceItem*>& CollectorTypes);
    
    UFUNCTION(BlueprintCallable)
    void ClaimItemCacheReward(UFortItem* ItemCache);
    
    UFUNCTION(BlueprintCallable)
    void ClaimAllResourceCollectors();
    
    UFUNCTION(BlueprintCallable)
    void CheckAffiliateName(const FString& AffiliateName, FOnCheckAffiliateNameComplete OnCheckAffiliateNameComplete);
    
    UFUNCTION(BlueprintCallable)
    EOfferPurchaseError CanPurchaseOffer(const FString& OfferId, const int32 PriceIndex, int32 Quantity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EOfferPurchaseError CanGiftOffer(const FString& OfferId, const TArray<FString>& ReceiverAccountIds, const FString& GiftWrapTemplateId, const FString& UserMessageToRecipients, const int32 PriceIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void CancelEpicPurchasingDisplay();
    
    UFUNCTION(BlueprintCallable)
    bool AreMissionRewardsAvailable();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAlteration(UFortAlterableItem* Item, UFortAlterationItem* AlterationToApply);
    
    UFUNCTION(BlueprintCallable)
    void AbandonExpedition(const UFortExpeditionItem* Expedition);
    
};

