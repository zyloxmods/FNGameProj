#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AthenaRewardItemReference.h"
#include "FortRarityItemData.h"
#include "GameplayTagContainer.h"
#include "EBattlePassView.h"
#include "FortItemPreviewScreen.h"
#include "Templates/SubclassOf.h"
#include "BattlePassScreen.generated.h"

class AFortItemPreviewWorld;
class UAthenaCosmeticItemDefinition;
class UAthenaExclusiveRewardBanner;
class UAthenaRewardItemTypeRarityTag;
class UAthenaSeasonItemDefinition;
class UBattlePassNavigator;
class UBattlePassPurchaseScreen;
class UBattlePassRewardChallenges;
class UBattlePassRewardPagedTrack;
class UCommonButton;
class UCommonTextBlock;
class UEnableMultiFactorModal;
class UFortAccountItemDefinition;
class UFortEventDateTimeTextBlock;
class UFortGiftingScreen;
class UFortItemDefinition;
class UFortSeasonLevelConfirmationScreen;

UCLASS(Blueprintable, EditInlineNew)
class UBattlePassScreen : public UFortItemPreviewScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGiftingScreen> GiftingScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnableMultiFactorModal> MFAModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBattlePassPurchaseScreen> PurchaseBattlePassScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortSeasonLevelConfirmationScreen> SeasonLevelPurchaseScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RefundGiftToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WrapPreviewExcludedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattlePassView CurrentView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaSeasonItemDefinition* SeasonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortItemPreviewWorld* CachedVaultWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAthenaRewardItemReference RewardInView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAthenaRewardItemReference PendingRewardToView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAccountItemDefinition* LastViewedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaCosmeticItemDefinition* CyclingCosmeticItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* CyclingItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAccountItemDefinition* CurrentDisplayedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassRewardPagedTrack* PagedRewardTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassNavigator* BattlePassNavigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaExclusiveRewardBanner* AthenaExclusiveRewardBanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassRewardChallenges* BattlePassRewardChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaRewardItemTypeRarityTag* ItemRewardTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SetDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChapterNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortEventDateTimeTextBlock* TextDate_EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ToggleViewDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_PurchaseBattlePassLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_BuyBattlePass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_GiftBattlePass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ReplayTrailer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CloseMobile;
    
public:
    UBattlePassScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void TrackShowAnimationFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void SpatialInputSuspensionChanged(bool bSupressInput);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool ShouldPlayBPVideo(bool bAllowUpdate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWatchVideo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnViewReward(FFortRarityItemData Rarity, bool bNoReward, int32 NumRewardsToPurchase, const UFortItemDefinition* RewardItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVariantUpdate(int32 CurrentIndex, int32 TotalNumVariants);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPurchasedAnnualPass(bool bIsPurchased);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDifferentBPText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestViewRewardComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestViewReward();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNoCurrentSeason();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattlePassViewChanged(EBattlePassView NewView);
    
};

