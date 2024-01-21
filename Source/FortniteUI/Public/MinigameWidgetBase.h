#pragma once
#include "CoreMinimal.h"
#include "AthenaGameMessageData.h"
#include "EAthenaGameMsgType.h"
#include "EFortMinigameState.h"
#include "FortHUDElementWidget.h"
#include "MinigameWidgetBase.generated.h"

class AFortMinigame;
class AFortVolume;
class APlayerState;
class USoundCue;

UCLASS(Blueprintable, EditInlineNew)
class UMinigameWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayCaptureObjectiveRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortMinigame* CurrentMinigame;
    
public:
    UMinigameWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetDisplayValues();
    
    UFUNCTION(BlueprintCallable)
    void OnStopExitingVolume(APlayerState* ClientState, AFortVolume* ExitedVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerStatUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnExitVolume(APlayerState* ClientState, AFortVolume* ExitedVolume);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnExitingVolume(APlayerState* ClientState, AFortVolume* ExitingVolume);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEnteredVolume(APlayerState* ClientState, AFortVolume* EnteredVolume);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayMinigameStartUI(bool bDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayMinigamePregameCountdownUI(bool bDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDisplayMinigameInProgressUI(bool bDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayMinigameEndUI(bool bDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayMiniGameAbortUI(bool bDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayLeavingVolumeUI(bool bDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayCaptureObjectiveUI(bool bDisplay);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrentStateChangedDelegate(EFortMinigameState MinigameState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAthenaGameMessageData MakeMessageData(EAthenaGameMsgType MsgType, FText MsgText, USoundCue* MsgSound, float DisplayTime);
    
    UFUNCTION(BlueprintCallable)
    void HideAllMinigameWidgetUI();
    
    UFUNCTION(BlueprintCallable)
    void DynamicHandleLoadingScreenVisibilityChanged(bool IsVisible);
    
};

