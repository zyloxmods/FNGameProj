#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "EHudVisibilityState.h"
#include "UIExtension.h"
#include "GameplayTagContainer.h"
#include "AthenaHUDBase.h"
#include "AthenaBroadcastHUDBase.generated.h"

class AActor;
class AFortGameState;
class AFortGameStateAthena;
class AFortMinigame;
class AFortVolume;
class UAthenaBroadcastMapPanelBase;
class UAthenaReplayActionFeedScreenBase;
class UAthenaSpectatorHUDControlsBase;
class UAthenaSpectatorNameplateLayerBase;
class UCommonWidgetSwitcher;
class UFortBroadcastViewSettings;
class UFortPlaylistAthena;
class UFortReplayGoToTimeDialogue;
class UFortReplayHighlightsWindow;
class UPrimitiveComponent;
class USpacer;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaBroadcastHUDBase : public UAthenaHUDBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleMatchStatusActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleSquadStatusActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleRemainingPlayersActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleActiveGridScreenActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleEliminatedGridScreenActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleMatchStatusScreenActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleScoreboardScreenActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleKillFeedActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleActionFeedScreenActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleGotoTimeRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TogglePipModeActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleFollowedPlayerInfoActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleFullscreenMapActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<UUserWidget>, FUIExtension> ExtensionWidgetOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpectatorHUDControlsBase* BroadcastHUDControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpectatorNameplateLayerBase* NameplateLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaBroadcastMapPanelBase* AthenaBroadcastMapPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* EventMatchInfoSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_TopLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* TopLeft_Empty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBroadcastViewSettings* TopLeft_ViewSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaReplayActionFeedScreenBase* TopLeft_ActionFeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortReplayGoToTimeDialogue* TopLeft_GoToTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortReplayHighlightsWindow* TopLeft_Highlights;
    
public:
    UAthenaBroadcastHUDBase();
private:
    UFUNCTION(BlueprintCallable)
    void TryHandleIfPlayerStateAlreadyInVolume();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFullscreenMapVisibility(bool bIsVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVolumeMinigameChanged(AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    void OnVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnVolumeAdded(AFortVolume* Volume);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnableToPerformAction(FGameplayTagContainer FailedReason, const FText& FailureText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleSquadStatusActionExecuted(bool& bPassThrough);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnToggleScoreboardScreenActionExecuted(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleRemainingPlayersActionExecuted(bool& bPassThrough);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTogglePipModeActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleMatchStatusScreenActionExecuted(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleMatchStatusActionExecuted(bool& bPassThrough);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnToggleKillFeedActionExecuted(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleFollowedPlayerInfoActionExecuted(bool& bPassThrough);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnToggleEliminatedGridScreenActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleActiveGridScreenActionExecuted(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaylistDataChanged(const UFortPlaylistAthena* PlaylistData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerTargetingChanged(bool bIsTargeting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPipModeChanged(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMinigameChanged(AFortMinigame* NewMinigame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIndicatorModeChanged(bool bIndicatorsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHudVisibilityChanged(EHudVisibilityState NewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameStateSet_BP(AFortGameStateAthena* GameStateAthena);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameStateSet(AFortGameState* NewGameState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCursorModeChanging(bool bCursorModeEnabled, FName ActionName);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCurrentPlaylistChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleToggleReplayViewSettings();
    
    UFUNCTION(BlueprintCallable)
    void HandleToggleHighlightsList();
    
    UFUNCTION(BlueprintCallable)
    void HandleToggleGoToTime();
    
    UFUNCTION(BlueprintCallable)
    void HandleToggleActionFeedScreen();
    
    UFUNCTION(BlueprintCallable)
    void HandleSpectatorViewTargetChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleNameplatesEnabledChanged(bool bInNameplatesEnabled);
    
    UFUNCTION(BlueprintCallable)
    void HandleHudVisibilityChanged(EHudVisibilityState NewVisibility);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleFollowedPlayerRespawnTimeChanged(float RespawnTime);
    
};

