#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortCollectionBookRewards.h"
#include "FortSwipeDetector.h"
#include "FortRewardNotificationWidget.generated.h"

class UFortExpeditionItem;
class UFortItem;
class UFortQuestItem;
class UFortRewardNotificationData;
class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class UFortRewardNotificationWidget : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortRewardNotificationData*> NotificationDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* OverlayMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSwipeDetector SwipeDetector;
    
    UFortRewardNotificationWidget();
    UFUNCTION(BlueprintCallable)
    void SetPrimaryActionText(FText Text);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryActionHidden();
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryActionEnabled(bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetAllRewardData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrimaryActionTextChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrimaryActionHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrimaryActionEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrimaryActionDisabled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationDown();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPrimaryActionHidden(bool& bHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPrimaryActionEnabled(bool& bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InspectItem(UFortItem* ItemToInspect);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddQuestData(UFortQuestItem* Quest);
    
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
    
};

