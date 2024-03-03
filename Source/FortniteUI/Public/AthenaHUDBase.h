#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "EFortPickerMode.h"
#include "EUIExtensionSlot.h"
#include "EVolumeState.h"
#include "FortPlayerDeathReport.h"
#include "UIExtension.h"
#include "FortUIStateWidgetBase.h"
#include "MutatorAddedWidgets.h"
#include "Templates/SubclassOf.h"
#include "AthenaHUDBase.generated.h"

class AFortGameplayMutator;
class AFortMinigame;
class AFortPlayerState;
class AFortVolume;
class AFortWeapon;
class APlayerState;
class UAthenaEquippedItemBase;
class UAthenaHUDMenu;
class UAthenaIndicatorLayerBase;
class UAthenaMapScreenContainer;
class UAthenaPlayerHitPointInfo;
class UAthenaPlayerTeamKillsBase;
class UAthenaSkydivingInformation;
class UAthenaSquadListBase;
class UCommonActivatableWidget;
class UFortWeaponReticleExtensionWidgetBase;
class UFortWeaponWheel;
class UInZoneTitleBarBase;
class UOverlay;
class URetainerBox;
class UUserWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaHUDBase : public UFortUIStateWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> MinigameWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ScalableOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMapScreenContainer* MapScreenContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaHUDMenu* AthenaHUDMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaPlayerTeamKillsBase* AthenaTeamKillsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSquadListBase* TeamInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaPlayerHitPointInfo* LocalPlayerHitPointInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaEquippedItemBase* AthenaEquippedItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSkydivingInformation* SkydivingInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* CompassSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URetainerBox* RetainerBox_TempFrit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortVolume* CreativeLinkedVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaIndicatorLayerBase* AthenaIndicatorLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> KairosHUDLayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMutatorAddedWidgets> MutatorAddedWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInZoneTitleBarBase* InZoneTitleBar;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIExtension> TournamentUIExtensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIExtension> ArenaTournamentUIExtensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortWeaponReticleExtensionWidgetBase* CurrentCustomReticleExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortWeaponReticleExtensionWidgetBase*> RecentReticleExtensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> NewEmotePicker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> SquadComsPickerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortWeaponWheel> WeaponWheelClass;
    
public:
    UAthenaHUDBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateUIExtensions(AFortPlayerState* ClientState, AFortMinigame* Minigame);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateCreativePlotLinkedVolume(AFortVolume* Volume);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetZoneCompleted(bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetQuickBarNative(bool bShouldDoQuickBarNative);
    
    UFUNCTION(BlueprintCallable)
    void SetFullscreenMapVisibilityNative(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrepareToShowEndGameUI();
    
private:
    UFUNCTION(BlueprintCallable)
    void PlaylistExtensionWidgetCreatedNotSupported(EUIExtensionSlot ExtensionSlot, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void OnVolumeShowPublishWatermarkChanged(AFortVolume* Volume, bool bShowPublishWatermark);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMinigameHideHUD(bool bLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHUDScaleChanged(float HUDScale);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExtensionWidgetRemoved(EUIExtensionSlot ExtensionSlot, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExtensionWidgetCreated(EUIExtensionSlot ExtensionSlot, UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayGameOver();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HUDOwnsExtensionSlot(EUIExtensionSlot ExtensionSlot) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleVolumeUnloaded(APlayerState* ClientState, AFortVolume* Volume);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleVolumeStateChanged(EVolumeState NewState, AFortVolume* Volume);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleVolumeLoaded(APlayerState* ClientState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleUpdateMinigameUIExtensions(AFortMinigame* Minigame);
    
    UFUNCTION(BlueprintCallable)
    void HandlePickerOpenRequest(EFortPickerMode Mode, int32 InitialOption, bool bIgnoreFirstAccept);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnUpdateInZoneTitleBarVisibility(bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnMutatorRemoved(AFortGameplayMutator* NewMutator);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnMutatorAdded(AFortGameplayMutator* NewMutator);
    
    UFUNCTION(BlueprintCallable)
    void HandleNewPanelFromMutator(TSubclassOf<UUserWidget> PanelClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleLocalPlayerDied(const FFortPlayerDeathReport& DeathReport);
    
    UFUNCTION(BlueprintCallable)
    void HandleExitVolume(APlayerState* ClientState, AFortVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void HandleEnteredVolume(APlayerState* ClientState, AFortVolume* Volume);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCursorModeChanging(bool bCursorModeEnabled, FName ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CustomWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetZoneCompleted() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearUIExtensions();
    
    UFUNCTION(BlueprintCallable)
    void BindVolumeEvents();
    
};

