#pragma once
#include "CoreMinimal.h"
#include "FortUIStateWidget_NUI.h"
#include "OnCrossplayWidgetClosedDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortUIStateWidget_Frontend.generated.h"

class UEnableMultiFactorModal;
class UFortGiftBoxItem;
class UFortItemReceivedScreen;

UCLASS(Blueprintable, EditInlineNew)
class UFortUIStateWidget_Frontend : public UFortUIStateWidget_NUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCrossplayWidgetClosed OnCrossplayWidgetClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVideoActive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortGiftBoxItem* NextGiftBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortItemReceivedScreen> ItemReceivedScreenClass;
    
public:
    UFortUIStateWidget_Frontend();
private:
    UFUNCTION(BlueprintCallable)
    void TryMFAModal(TSubclassOf<UEnableMultiFactorModal> BPClass);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool ShowInitialCrossplayDialog();
    
    UFUNCTION(BlueprintCallable)
    void SetVideoActive(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchmakingV2Changed(bool matchmakingActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedSeeTrailerMovie(bool bAllowUpdate) const;
    
    UFUNCTION(BlueprintCallable)
    void MarkTrailerMovieSeenByIndex(int32 IndexOfMovieToMarkSeen);
    
    UFUNCTION(BlueprintCallable)
    bool IsOkToCheckForGifts(bool& bTemporary);
    
    UFUNCTION(BlueprintCallable)
    void HandleGiftingComplete();
    
    UFUNCTION(BlueprintCallable)
    void HandleGiftBoxRemoved(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetTrailerMovieIndexThatNeedsToBeShownForQuest(int32& IndexOfMovieToShow) const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckForGifts();
    
    UFUNCTION(BlueprintCallable)
    void CheckBanStatus(bool bBanned);
    
    UFUNCTION(BlueprintCallable)
    bool AttemptToOpenBattlePassTabForNewSeason();
    
};

