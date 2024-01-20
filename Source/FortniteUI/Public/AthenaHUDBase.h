#pragma once
#include "CoreMinimal.h"
#include "EPlaylistUIExtensionSlot.h"
#include "EVolumeState.h"
#include "FortUIStateWidget_NUI.h"
#include "Templates/SubclassOf.h"
#include "AthenaHUDBase.generated.h"

class AFortMinigame;
class AFortPlayerState;
class AFortVolume;
class APlayerState;
class UAthenaPlayerViewModel;
class UOverlay;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaHUDBase : public UFortUIStateWidget_NUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaPlayerViewModel* PlayerViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ScalableOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> KairosHUDLayerClass;
    
public:
    UAthenaHUDBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ViewModelChanged(UAthenaPlayerViewModel* ViewModel);
    
    UFUNCTION(BlueprintCallable)
    void UpdateUIExtensions(AFortPlayerState* ClientState, AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetQuickBarNative(bool bShouldDoQuickBarNative);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFullScreenMapVisibility(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaylistExtensionWidgetCreated(EPlaylistUIExtensionSlot ExtensionSlot, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMinigameHideHUD(bool bLoading);
    
    UFUNCTION(BlueprintCallable)
    void HandleVolumeUnloaded(APlayerState* ClientState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleVolumeStateChanged(EVolumeState NewState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleVolumeLoaded(APlayerState* ClientState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleUpdateMinigameUIExtensions(AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    void HandleExitVolume(APlayerState* ClientState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleEnteredVolume(APlayerState* ClientState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleCursorModeChanging(bool bCursorModeEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ClearUIExtensions();
    
    UFUNCTION(BlueprintCallable)
    void BindVolumeEvents();
    
};

