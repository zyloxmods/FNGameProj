#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "FortItemQuantityPair.h"
#include "FortMultiSizeBrush.h"
#include "HomebaseInventoryUpdatedDelegate.h"
#include "HomebaseItemUpgradePointsChangedDelegate.h"
#include "HomebaseMaximumItemLevelChangedDelegate.h"
#include "HomebaseSquad.h"
#include "ItemSlottingPreviewInfoChangedDelegate.h"
#include "PlayerInfoChangedDelegate.h"
#include "SquadSlotMarkedAsSeenDelegate.h"
#include "WorkerPreviewStateChangedDelegate.h"
#include "WorkerSetBonusData.h"
#include "HomeBaseContext.generated.h"

class UFortCampaignHeroLoadoutItem;
class UFortCollectedResourceItem;
class UFortHero;

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API UHomeBaseContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorkerPreviewStateChanged OnWorkerPreviewStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHomebaseInventoryUpdated OnHomebaseInventoryUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHomebaseMaximumItemLevelChanged OnMaximumItemLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHomebaseItemUpgradePointsChanged OnItemUpgradePointsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSquadSlotMarkedAsSeen SquadSlotMarkedAsSeen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInfoChanged OnPlayerInfoChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemSlottingPreviewInfoChanged OnItemSlottingPreviewInfoChangedEvent;
    
    UHomeBaseContext();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetHomebaseSquadData(const FName SquadId, FHomebaseSquad& OutHomebaseSquad) const;
    
    UFUNCTION(BlueprintCallable)
    void SetActiveHeroLoadout(UFortCampaignHeroLoadoutItem* HeroLoadout);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHeroUnlockedCommanderPerk(UFortHero* Hero) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalSkillPointsEarned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTotalHomebaseRating(const FUniqueNetIdRepl& UniqueId, int32& Rating, float& ProgressFraction, bool bUsePhoenixStats) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTeamHomebaseRating(const FUniqueNetIdRepl& PlayerId, int32& Rating, float& ProgressFraction, bool bUsePhoenixStats) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetStaticSetBonusData(const FGameplayTag& InSetBonusTag, FWorkerSetBonusData& OutSetBonusData, FFortMultiSizeBrush& OutBrush);
    
    UFUNCTION(BlueprintCallable)
    void GetResourceCollectorRewardsEstimates(const TArray<UFortCollectedResourceItem*>& CollectorTypes, TArray<FFortItemQuantityPair>& OutEstimates);
    
    UFUNCTION(BlueprintCallable)
    void GetResourceCollectorRewardsEstimate(UFortCollectedResourceItem* CollectorType, FFortItemQuantityPair& OutEstimate);
    
    UFUNCTION(BlueprintCallable)
    void GetResourceCollectorRateInfo(UFortCollectedResourceItem* CollectorType, float& RatePerSecond, int32& MaxCapacity);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumAccountLimitedItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMissionDefenderSquadId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxDeployableDefenderCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocalTeamHomebaseRating(int32& Rating, float& ProgressFraction, bool bUsePhoenixStats) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLocalPlayerHomebaseRating(int32& Rating, float& ProgressFraction, bool bUsePhoenixStats) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetHomebaseDefenderSquadId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentDeployedDefenderCount() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAllResourceCollectorRewardEstimates(TArray<FFortItemQuantityPair>& OutEstimates);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortCampaignHeroLoadoutItem* GetActiveHeroLoadout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActiveDefenderSquadId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesTeamMeetRequiredHomebaseRating(int32 RequiredHomebaseRating, bool bUsePhoenixStats) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesTeamMeetMaximumHomebaseRatingRequirement(int32 MaximumAllowedHomebaseRating, bool bUsePhoenixStats) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearHeroLoadout(UFortCampaignHeroLoadoutItem* HeroLoadout);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastSquadSlotMarkedAsSeen();
    
};

