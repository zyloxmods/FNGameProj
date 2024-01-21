#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "CreativeOptionVariableBase.h"
#include "FortPlayerController.h"
#include "GhostModeRepData.h"
#include "OnBalloonMovementChangedDelegate.h"
#include "OnCreativeFlyChangedDelegate.h"
#include "OnCreativeFlyingSpeedChangedDelegate.h"
#include "OnCreativeGhostChangedDelegate.h"
#include "OnCreativeModeEnabledChangedDelegate.h"
#include "OnCreativeQuickbarEnabledChangedDelegate.h"
#include "OnGhostModeChangedDelegate.h"
#include "OnShowCreativeGlobalOptionsDelegate.h"
#include "OnWorldInventoryChangedDelegate.h"
#include "VehicleTrickInfo.h"
#include "FortPlayerControllerGameplay.generated.h"

class AFortAthenaVehicle;
class AFortPoiManager;
class UFortAmbientAudioController;
class UFortCreativeOption;
class UFortCreativeOptionsBundle;
class UFortWorldItemDefinition;
class UInputComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerControllerGameplay : public AFortPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortAmbientAudioController* FortAmbientAudioController;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_PoiTagContainerTableID, meta=(AllowPrivateAccess=true))
    int16 PoiTagContainerTableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle VerifyAllowedToFlyTimerHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeGhostChanged OnCreativeGhostEnabledDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeFlyingSpeedChanged OnCreativeFlyingSpeedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowCreativeGlobalOptions OnShowCreativeGlobalOptions;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeQuickbarEnabledChanged OnCreativeQuickbarEnabledChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeModeEnabledChanged OnCreativeModeEnabledChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWorldItemDefinition> CreativeMoveToolItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleTrickInfo VehicleTrickInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GhostModeRepData, meta=(AllowPrivateAccess=true))
    FGhostModeRepData GhostModeRepData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGhostModeChanged OnGhostModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBalloonMovementChanged OnBalloonMovementChanged;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FlyingModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FlyingModifierIndex, meta=(AllowPrivateAccess=true))
    int32 FlyingModifierIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlightSpeedWhenEnteredSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsFlightSprinting, meta=(AllowPrivateAccess=true))
    bool bIsFlightSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsCreativeModeEnabled, meta=(AllowPrivateAccess=true))
    uint8 bIsCreativeModeEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsCreativeQuickbarEnabled, meta=(AllowPrivateAccess=true))
    uint8 bIsCreativeQuickbarEnabled: 1;
    
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
    
public:
    AFortPlayerControllerGameplay();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Validation_IsFlyingPossible() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartGhostMode(UFortWorldItemDefinition* ItemProvidingGhostMode);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsCreativeModeEnabled(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDElementVisibility(const FGameplayTagContainer& HUDElementTags, bool bHideElements, FName ReasonName);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRPCSetDisplayNPCNumbers(bool bEnable);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreativeToggleFly();
    
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
    void ResetTrick(AFortAthenaVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void ResetHUDElementVisibilityToSettings(const FGameplayTagContainer& HUDElementTags);
    
    UFUNCTION(BlueprintCallable)
    void RefreshHUDElementVisibilitiesToSettings();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWantsToGhostModeChanged(UFortCreativeOption* CreativeOption, uint8 IndexValue);
    
    UFUNCTION(BlueprintCallable)
    void OnWantedFlightSpeedChanged(UFortCreativeOption* CreativeOption, uint8 IndexValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnVerifyAllowedToFly();
    
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
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInGhostMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeQuickbarEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreativeModeEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllowedToFly() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeAmbientAudioController();
    
    UFUNCTION(BlueprintCallable)
    void HandlePoiTagContainerTableFinishedReplicating(AFortPoiManager* PoiManager);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GrantCreativePhoneItemDefLoadedCallback();
    
public:
    UFUNCTION(BlueprintCallable)
    FVehicleTrickInfo GetVehicleTrickInfo();
    
    UFUNCTION(BlueprintCallable)
    UFortAmbientAudioController* GetAmbientAudioController();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EndGhostMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisplayNPCNumbers(bool bDisplay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisplayHUDElementVisibility();
    
    UFUNCTION(BlueprintCallable)
    void DisableTrickCredit(float Duration);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEnsureCreativePhoneIsInProperSlot();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCreativeStopFly();
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckGhostModeItemReplicated();
    
    UFUNCTION(BlueprintCallable)
    void CheckGhostModeItemRemoved(UFortWorldItemDefinition* GhostModeItemDef);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreHUDElementsVisible(const FGameplayTagContainer& HUDElementTags) const;
    
};

