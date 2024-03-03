#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortCollectionBookRewards.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortItemManagementMulchPanel.h"
#include "FortSwipeDetector.h"
#include "Templates/SubclassOf.h"
#include "FortRewardNotificationWidget.generated.h"

class UFortExpeditionItem;
class UFortItem;
class UFortMulchConfirmationModalWidget;
class UFortQuestItem;
class UFortRewardEpicQuestData;
class UFortRewardExpeditionData;
class UFortRewardGiftBoxData;
class UFortRewardNotificationData;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class UFortRewardNotificationWidget : public UCommonActivatablePanel, public IFortItemManagementMulchPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortRewardNotificationData*> NotificationDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OverlayMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSwipeDetector SwipeDetector;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMulchConfirmationModalWidget> MulchConfirmationModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortMulchConfirmationModalWidget* MulchConfirmationModal;
    
public:
    UFortRewardNotificationWidget();
    UFUNCTION(BlueprintCallable)
    void ShowMulchConfirmationModal();
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryActionText(FText Text);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryActionHidden();
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryActionEnabled(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetAllRewardData();
    
    UFUNCTION(BlueprintCallable)
    void PopulateReward(const UFortRewardNotificationData* Reward);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRewardsScreenClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRewardsClaimFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRewardsClaimed(const TArray<FFortItemInstanceQuantityPair>& ItemList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrimaryActionTextChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrimaryActionHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrimaryActionEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrimaryActionDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPopulateNewQuestReward(const UFortRewardEpicQuestData* QuestReward);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPopulateGiftBoxReward(const UFortRewardGiftBoxData* GiftBoxReward);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPopulateExpeditionReward(const UFortRewardExpeditionData* ExpeditionReward);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPopulateChoiceRewards(const TArray<FFortItemInstanceQuantityPair>& ItemList);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationDown();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMulchCompleted();
    
    UFUNCTION(BlueprintCallable)
    void NotifyPanelDeactivated();
    
    UFUNCTION(BlueprintCallable)
    void NotifyPanelActivated();
    
    UFUNCTION(BlueprintCallable)
    void MarkDefaultItemsForMulch(const TArray<FFortItemInstanceQuantityPair> ItemList);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPrimaryActionHidden(bool& bHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPrimaryActionEnabled(bool& bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InspectItem(UFortItem* ItemToInspect, int32 QuantityOverride);
    
    UFUNCTION(BlueprintCallable)
    void HideMulchConfirmationModal();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnQuestRewardClaimed(const UFortQuestItem* Quest, const TArray<FFortItemInstanceQuantityPair>& Rewards);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnNoQuestRewardsToClaim();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnMissionRewardsOpenFailed();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnMissionRewardsOpened(const TArray<FFortItemInstanceQuantityPair>& MissionRewards);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnMissionAlertRewardsOpened(const TArray<FFortItemInstanceQuantityPair>& AlertRewards);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnItemCacheRewardsClaimFailed();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnItemCacheRewardsClaimed(const TArray<FFortItemInstanceQuantityPair>& ClaimedRewards);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnDifficultyIncreaseRewardsClaimFailed();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnDifficultyIncreaseRewardsClaimed(const TArray<FFortItemInstanceQuantityPair>& DifficultyRewards);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnCollectionBookRewardClaimed(FFortCollectionBookRewards RewardClaimed, bool bSuccess, const TArray<FFortItemInstanceQuantityPair>& ActualRewards);
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginCloseRewardsScreen();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddQuestData(UFortQuestItem* Quest);
    
    UFUNCTION(BlueprintCallable)
    void AddPhoenixLevelUpRewardData();
    
    UFUNCTION(BlueprintCallable)
    void AddMissionData();
    
    UFUNCTION(BlueprintCallable)
    void AddMissionAlertData();
    
    UFUNCTION(BlueprintCallable)
    void AddItemCacheRewardData(UFortItem* ItemCache);
    
    UFUNCTION(BlueprintCallable)
    void AddGiftBoxData();
    
    UFUNCTION(BlueprintCallable)
    void AddExpeditionData(UFortExpeditionItem* ExpeditionItem);
    
    UFUNCTION(BlueprintCallable)
    void AddEpicQuestData(UFortQuestItem* Quest);
    
    UFUNCTION(BlueprintCallable)
    void AddDifficultyIncreaseRewardData();
    
    UFUNCTION(BlueprintCallable)
    void AddCollectionBookData(const FFortCollectionBookRewards& CollectionBookRewards);
    
    
    // Fix for true pure virtual functions not being implemented
};

