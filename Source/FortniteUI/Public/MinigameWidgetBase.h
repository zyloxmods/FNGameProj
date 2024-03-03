#pragma once
#include "CoreMinimal.h"
#include "AthenaGameMessageData.h"
#include "EAthenaGameMsgType.h"
#include "EFortMinigameState.h"
#include "FortHUDElementWidget.h"
#include "Templates/SubclassOf.h"
#include "MinigameWidgetBase.generated.h"

class AFortGameStateAthena;
class AFortMinigame;
class AFortVolume;
class AFortVolumeManager;
class AGameStateBase;
class APlayerState;
class UFortMinigameStatFilter;
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
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* CurrentGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortVolumeManager* CurrentVolumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortVolume* CurrentVolume;
    
public:
    UMinigameWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetDisplayValues();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldGameStateChanged(AGameStateBase* GameState);
    
    UFUNCTION(BlueprintCallable)
    void OnVolumeMinigameChanged(AFortMinigame* Minigame);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerStatUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveUpdated();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameStateVolumeManagerReplicated();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnExitVolume(APlayerState* ClientState, AFortVolume* ExitedVolume);
    
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
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCurrentStateChangedDelegate(AFortMinigame* Minigame, EFortMinigameState MinigameState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAthenaGameMessageData MakeMessageData(EAthenaGameMsgType MsgType, FText MsgText, USoundCue* MsgSound, float DisplayTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void HideAllMinigameWidgetUI();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStatChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatValue(TSubclassOf<UFortMinigameStatFilter> InFilter, bool bGameTotal);
    
private:
    UFUNCTION(BlueprintCallable)
    void DynamicHandleLoadingScreenVisibilityChanged(bool IsVisible);
    
};

