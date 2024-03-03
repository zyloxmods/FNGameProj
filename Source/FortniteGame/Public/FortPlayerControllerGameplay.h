#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayAbilitySpec.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CreativeOptionVariableBase.h"
#include "EFortQuickTimeEventResult.h"
#include "FortAbilitySetHandle.h"
#include "FortPlayerController.h"
#include "GhostModeRepData.h"
#include "OnBalloonMovementChangedDelegate.h"
#include "OnCreativeFlyChangedDelegate.h"
#include "OnCreativeFlyingSpeedChangedDelegate.h"
#include "OnCreativeGhostChangedDelegate.h"
#include "OnCreativeHeatmapToggledDelegate.h"
#include "OnCreativeModeEnabledChangedDelegate.h"
#include "OnCreativePreviewScreenshotAcceptedDelegate.h"
#include "OnCreativePreviewScreenshotActiveChangedDelegate.h"
#include "OnCreativePreviewScreenshotResetDelegate.h"
#include "OnCreativeQuickbarComponentLoadedDelegate.h"
#include "OnCreativeQuickbarEnabledChangedDelegate.h"
#include "OnCreativeQuickmenuEnabledChangedDelegate.h"
#include "OnCreativeSwapPhoneAndHarvestHoldChangedDelegate.h"
#include "OnCreativeUIMetricsDisplayChangedDelegate.h"
#include "OnDBNOCarryPlayerChangedDelegate.h"
#include "OnGhostModeChangedDelegate.h"
#include "OnShowCreativeGlobalOptionsDelegate.h"
#include "OnWorldInventoryChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "TriggerSetupVehicleFuelWidgetDelegate.h"
#include "VehicleFuelAddedDelegate.h"
#include "VehicleTrickInfo.h"
#include "FortPlayerControllerGameplay.generated.h"

class AActor;
class AFortPlayerState;
class AFortPoiManager;
class UCameraModifier;
class UCreativeQuickbarComponent;
class UFortAbilitySet;
class UFortAmbientAudioController;
class UFortCreativeOption;
class UFortCreativeOptionsBundle;
class UFortWorldItemDefinition;
class UInputComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortPlayerControllerGameplay : public AFortPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAmbientAudioController* FortAmbientAudioController;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_PoiTagContainerTableID, meta=(AllowPrivateAccess=true))
    int16 PoiTagContainerTableID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTriggerSetupVehicleFuelWidget TriggerSetupVehicleFuelWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleFuelAdded OnAddFuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle VerifyAllowedToFlyTimerHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeGhostChanged OnCreativeGhostEnabledDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeHeatmapToggled OnCreativeHeatmapToggledDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeSwapPhoneAndHarvestHoldChanged OnCreativeSwapPhoneAndHarvestHoldChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeFlyingSpeedChanged OnCreativeFlyingSpeedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeUIMetricsDisplayChanged OnCreativeUIMetricsDisplayChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowCreativeGlobalOptions OnShowCreativeGlobalOptions;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeQuickbarEnabledChanged OnCreativeQuickbarEnabledChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeQuickbarComponentLoaded OnCreativeQuickbarComponentLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeQuickmenuEnabledChanged OnCreativeQuickmenuEnabledChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeModeEnabledChanged OnCreativeModeEnabledChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativePreviewScreenshotActiveChanged OnCreativePreviewScreenshotActiveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativePreviewScreenshotReset OnCreativePreviewScreenshotReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativePreviewScreenshotAccepted OnCreativePreviewScreenshotAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativePreviewScreenshotReset OnCreativePreviewScreenshotCancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBalloonMovementChanged OnBalloonMovementChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWorldItemDefinition> CreativeMoveToolItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCreativeQuickbarComponent> CreativeQuickbarClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CreativeCameraPreviewScreenshotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_CreativeQuickbarComponent, meta=(AllowPrivateAccess=true))
    UCreativeQuickbarComponent* CreativeQuickbarComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleTrickInfo VehicleTrickInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GhostModeRepData, meta=(AllowPrivateAccess=true))
    FGhostModeRepData GhostModeRepData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGhostModeChanged OnGhostModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDBNOCarryPlayerChanged OnDBNOCarryPlayerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWorldInventoryChanged OnWorldInventoryChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeFlyChanged OnCreativeFlyChangedDelegate;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint16 ServerNumNPCs;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint16 ServerMaxNumNPCs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle AmbientControllerInitializeTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bDisplayNPCNumbers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSetInitialPoiTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* CreativeModeFlyingInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* CreativeModeInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* CreativeGlobalOptionsInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* CreativeModePreviewScreenshotInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* CreativeModeInGameReadyCheckInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FlyingModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FlyingModifierIndex, meta=(AllowPrivateAccess=true))
    int32 FlyingModifierIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UIMetricsDisplayIndex, meta=(AllowPrivateAccess=true))
    int32 UIMetricsDisplayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlightSpeedWhenEnteredSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsFlightSprinting, meta=(AllowPrivateAccess=true))
    bool bIsFlightSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsCreativeModeEnabled, meta=(AllowPrivateAccess=true))
    uint8 bIsCreativeModeEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsCreativeQuickbarEnabled, meta=(AllowPrivateAccess=true))
    uint8 bIsCreativeQuickbarEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsCreativeQuickmenuEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCreativeMCPProfileIsMatchamkingEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsCreativeThermometer2Enabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsCreativeThermometerNewUIEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsCreativeIslandExporterEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCameraModifier>> DefaultCameraModifierClasses;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortCreativeOptionsBundle> CreativeOptions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCreativeOptionsBundle* CreativeOptionsInternal;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreativeOptionVariableBase WantsToGhostMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreativeOptionVariableBase WantedFlightSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreativeOptionVariableBase WantsToSwapPhoneAndHarvestHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreativeOptionVariableBase WantedUIMetricsDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FFortAbilitySetHandle> AppliedInGameModifierAbilitySetHandles;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UInputComponent*> AbilityActivatedByInputInputComponentMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayAbilitySpecHandle> AbilityActivatedByInputSpecHandleMap;
    
public:
    AFortPlayerControllerGameplay();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Validation_IsFlyingPossible() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartGhostMode(UFortWorldItemDefinition* ItemProvidingGhostMode);
    
    UFUNCTION(BlueprintCallable)
    void ShowQuicktimeEventWidget(float Duration, float SweetSpot, float PerfectTolerance, float GreatTolerance, float GoodTolerance);
    
    UFUNCTION(BlueprintCallable)
    void SetLastUsedCreativePropetyFilter(int32 PropertyFilterIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDElementVisibility(const FGameplayTagContainer& HUDElementTags, bool bHideElements, FName ReasonName);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRPCSetDisplayNPCNumbers(bool bEnable);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreativeToggleFly(const bool bEnableOnly);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreativeStopGhost();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreativeStopFlyUp();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreativeStopFlyDown();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreativeStopFly();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreativeStartFlyUp();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreativeStartFlyDown();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreativeSetGhost(bool bWantsToGhost);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreativeSetFlightSprint(bool bSprint);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreativeSetFlightSpeedIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAwardVehicleTrickPoints(int32 InPoints, int32 InAirTimeX1000);
    
    UFUNCTION(BlueprintCallable)
    void ResetTrick(AActor* VehicleActor);
    
    UFUNCTION(BlueprintCallable)
    void ResetHUDElementVisibilityToSettings(const FGameplayTagContainer& HUDElementTags);
    
    UFUNCTION(BlueprintCallable)
    void RefreshHUDElementVisibilitiesToSettings();
    
    UFUNCTION(BlueprintCallable)
    void QuickTimeEventFeedbackWidget(EFortQuickTimeEventResult Result);
    
    UFUNCTION(BlueprintCallable)
    void PushCreativeReadyCheckInputMode();
    
    UFUNCTION(BlueprintCallable)
    void PopCreativeReadyCheckInputMode();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWantsToGhostModeChanged(UFortCreativeOption* CreativeOption, uint8 IndexValue);
    
    UFUNCTION(BlueprintCallable)
    void OnWantedUIMetricsDisplayChanged(UFortCreativeOption* CreativeOption, uint8 IndexValue);
    
    UFUNCTION(BlueprintCallable)
    void OnWantedToSwapPhoneAndHarvestHoldChanged(UFortCreativeOption* CreativeOption, uint8 IndexValue);
    
    UFUNCTION(BlueprintCallable)
    void OnWantedFlightSpeedChanged(UFortCreativeOption* CreativeOption, uint8 IndexValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnVerifyAllowedToFly();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_UIMetricsDisplayIndex();
    
public:
    UFUNCTION()
    void OnRep_PoiTagContainerTableID(int16 PreviousPoiTagContainerTableID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsFlightSprinting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsCreativeQuickbarEnabled(bool bPrevIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsCreativeModeEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GhostModeRepData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FlyingModifierIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CreativeQuickbarComponent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingHideOtherPlayerNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInGhostMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeThermometerNewUIEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeQuickmenuEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeQuickbarEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeQuickbarActive() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCreativePreviewScreenshotAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativePhoneAndHarvestHoldSwapped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeModeEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeIslandExporterEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllowedToFly() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeAmbientAudioController();
    
    UFUNCTION(BlueprintCallable)
    void HideQuicktimeEventWidget();
    
    UFUNCTION(BlueprintCallable)
    void HandlePoiTagContainerTableFinishedReplicating(AFortPoiManager* PoiManager);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GrantCreativePhoneItemDefLoadedCallback();
    
public:
    UFUNCTION(BlueprintCallable)
    FVehicleTrickInfo GetVehicleTrickInfo();
    
    UFUNCTION(BlueprintCallable)
    FString GetSpectatingPlayerName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSettingsFilteredPlayerName(const AFortPlayerState* OtherPlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastUsedCreativePropetyFilter();
    
    UFUNCTION(BlueprintCallable)
    UFortAmbientAudioController* GetAmbientAudioController();
    
    UFUNCTION(BlueprintCallable)
    void FollowPreviousTeammate();
    
    UFUNCTION(BlueprintCallable)
    void FollowNextTeammate();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EndGhostMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisplayNPCNumbers(bool bDisplay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisplayHUDElementVisibility();
    
    UFUNCTION(BlueprintCallable)
    void DisableTrickCredit(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void CreativeToggleFly(const bool bEnableOnly);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRemoveItemAbilitySet(UFortAbilitySet* AbilitySet, FGuid ItemGuid);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCreativeStopFly();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCreativeSetUIMetricsDisplayIndex(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCreativePhoneCreated();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientApplyItemAbilitySet(UFortAbilitySet* AbilitySet, FGuid ItemGuid);
    
    UFUNCTION(BlueprintCallable)
    void CheckGhostModeItemReplicated();
    
    UFUNCTION(BlueprintCallable)
    void CheckGhostModeItemRemoved(UFortWorldItemDefinition* GhostModeItemDef);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFollowTeammate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreHUDElementsVisible(const FGameplayTagContainer& HUDElementTags) const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateCreativePreviewScreenshot(bool bActivate);
    
};

