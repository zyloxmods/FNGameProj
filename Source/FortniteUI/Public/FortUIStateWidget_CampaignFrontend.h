#pragma once
#include "CoreMinimal.h"
#include "BasicDynamicMulticastDelegateDelegate.h"
#include "EFortStoreState.h"
#include "FortUIStateWidget_NUI.h"
#include "Templates/SubclassOf.h"
#include "FortUIStateWidget_CampaignFrontend.generated.h"

class UCommonWidgetStack;
class UEnableMultiFactorModal;
class UFortGiftBoxItem;
class UFortItemReceivedScreen;
class UFortPlayerSurveyDispatcher;

UCLASS(Blueprintable, EditInlineNew)
class UFortUIStateWidget_CampaignFrontend : public UFortUIStateWidget_NUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasicDynamicMulticastDelegate OnCrossplayWidgetClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetStack* MainContentStack;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortItemReceivedScreen> ItemReceivedScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortGiftBoxItem* NextGiftBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyDispatcher* PlayerSurveyDispatcher;
    
public:
    UFortUIStateWidget_CampaignFrontend();
protected:
    UFUNCTION(BlueprintCallable)
    void TryMFAModal(TSubclassOf<UEnableMultiFactorModal> BPClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void SocialBanModalCheck();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool ShowInitialCrossplayDialog();
    
    UFUNCTION(BlueprintCallable)
    void QueueSurvivorSquadsAutoSlottedNotification();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStoreStateChangedBP(EFortStoreState NewStoreState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchmakingV2Changed(bool matchmakingActive);
    
    UFUNCTION(BlueprintCallable)
    bool IsOkToCheckForGifts(bool& bTemporary);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleStoreStateChanged(EFortStoreState NewStoreState);
    
    UFUNCTION(BlueprintCallable)
    void HandleGiftingComplete();
    
    UFUNCTION(BlueprintCallable)
    void HandleGiftBoxRemoved(bool bSuccess);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPlayerSurveyDispatcher* GetPlayerSurveyDispatcher() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckForGifts();
    
    UFUNCTION(BlueprintCallable)
    bool AttemptToOpenBattlePassTabForNewSeason();
    
};

