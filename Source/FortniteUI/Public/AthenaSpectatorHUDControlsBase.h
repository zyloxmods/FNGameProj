#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ESpectatorCameraType.h"
#include "AthenaSpectatorHUDControlsBase.generated.h"

class AFortPlayerControllerSpectating;
class AFortPlayerState;
class AFortReplaySpectator;
class UCommonButton;
class UFortTimelineBase;
class UIconTextButtonSpectatorBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorHUDControlsBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTimelineBase* ReplayTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_FocusTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIconTextButtonSpectatorBase* IconTextButtonReplay_PlayHighlights;
    
public:
    UAthenaSpectatorHUDControlsBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetFocusToPlayPauseIfNeeded();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatorPC, AFortPlayerState* NewFollowedPlayer);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCameraTypeChangedInternal(AFortPlayerControllerSpectating* SpectatorPC, ESpectatorCameraType NewCameraType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCameraTypeChanged(AFortPlayerControllerSpectating* SpectatorPC, ESpectatorCameraType NewCameraType);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleReplayHighlightsAvailable(AFortReplaySpectator* Sender, bool bIsAvailable);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleBattleMapTimelineModeChanged(bool bIsOnTimelineMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CenterControls();
    
};

