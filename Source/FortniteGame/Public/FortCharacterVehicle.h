#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "AthenaVehicleShootingCone.h"
#include "FortAttributeInitializationKey.h"
#include "FortPlayerPawnAthena.h"
#include "FortVehicleInterface.h"
#include "OnMountedWeaponFiredDelegate.h"
#include "OnSleepStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "VehicleCosmeticInfo.h"
#include "VehicleHealthChangedDelegate.h"
#include "VehicleSeatEventDelegate.h"
#include "FortCharacterVehicle.generated.h"

class AActor;
class AFortPawn;
class AFortPlayerController;
class AFortPlayerControllerZone;
class AFortPlayerPawn;
class AFortPlayerStateZone;
class UAbilitySystemComponent;
class UAnimInstance;
class UAthenaItemWrapDefinition;
class UAudioComponent;
class UFortAbilitySet;
class UFortAbilitySystemComponent;
class UFortCameraMode;
class UFortMontageItemDefinitionBase;
class UFortOstrichAnimInstance;
class UFortOstrichSet;
class UFortSkeletalAudioComponent;
class UFortVehicleSeatComponent;
class UFortVehicleSeatWeaponComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USkeletalMeshComponent;
class UTexture;

UCLASS(Blueprintable, MinimalAPI)
class AFortCharacterVehicle : public AFortPlayerPawnAthena, public IFortVehicleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyBuildingSMActorOnForceExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDestroyOnLastExit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 VTDMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OverrideWrap, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAthenaItemWrapDefinition> SoftOverrideItemWrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaItemWrapDefinition* OverrideItemWrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleCosmeticInfo VehicleCosmeticInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bForcedToAlwaysSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowInteractBetweenFortVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* EmoteMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortMontageItemDefinitionBase*> SpecialVehicleEmotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnPropOnEmoteScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSkeletalAudioComponent* EmoteFoleyAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeatSwitchCooldown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMountedWeaponFired OnMountedWeaponFiredEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVehicleSeatComponent* VehicleSeatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_OverrideAbilitySystemComponent, meta=(AllowPrivateAccess=true))
    UFortAbilitySystemComponent* OverrideAbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAttributeInitializationKey AttributeInitKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> DriverAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> PassengerAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortOstrichSet* OstrichSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer VehicleTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAbilitySet* StartupAbilitySet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleHealthChanged OnHealthChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> CameraModeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode> PassengerCameraModeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBoostDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBoostDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullyChargedJumpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DriverExitLaunchScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PassengerExitLaunchScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraInteractTraceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistForInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashMovementLockDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeatTransitionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClearMoveIgnoreActorsDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthIndicatorVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplashDamageMinPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplashDamageFalloffRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IgnoreDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IgnoreRiderDamageFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float JumpPressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDidChargeJump;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerController> LastController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortOstrichAnimInstance* OstrichAnimInstance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleSeatEvent OnPawnEnteredVehicleAtSeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleSeatEvent OnPawnEnteredVehicleSeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleSeatEvent OnPawnExitedVehicleSeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleSeatEvent OnPawnExitedVehicleFromSeat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSleepStateChanged OnSleepStateChangedDelegate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IndicatorAudibleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* IndicatorIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IndicatorTint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpecialActorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SpecialActorMinimapIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SpecialActorMinimapIconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SpecialActorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ReregisterSpecialActorIconDelay;
    
public:
    AFortCharacterVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WeaponFired(UFortVehicleSeatWeaponComponent* WeaponComponent, float Overheat);
    
    UFUNCTION(BlueprintCallable)
    void StopEmoting();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldShowSoundIndicator() const;
    
    UFUNCTION(BlueprintCallable)
    void SetAllowInteractionBetweenFortVolumes(bool bInteractBetweenVolumes);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShutdown();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OverrideWrap();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OverrideAbilitySystemComponent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPawnExitVehicle(AFortPlayerPawn* PlayerPawn, FName ExitSocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPawnEnterVehicle(AFortPlayerPawn* PlayerPawn, const int32 SeatIdx);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldExitStopped(AFortPawn* ExitingPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldExitStarted(AFortPawn* ExitingPawn, const float ExitDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ApplyCosmeticWrap(const UAthenaItemWrapDefinition* LoadedWrap);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GunOverheat(UFortVehicleSeatWeaponComponent* WeaponComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetSkeletalMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetMechMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsChargedJumpActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasGunner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetEmoteMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAbilitySystemComponent* GetAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText FormatActionLabelText(const FName ActionName, const FText& InActionLabel);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoesDamageCauserPreventDamageFromBeingNulled(AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_CanInteract(AFortPlayerController* FortPC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowInteractionBetweenFortVolume() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void WakeUp() override PURE_VIRTUAL(WakeUp,);
    
    UFUNCTION(BlueprintCallable)
    bool VehicleIsInSkyTube() const override PURE_VIRTUAL(VehicleIsInSkyTube, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool VehicleIsInAir() const override PURE_VIRTUAL(VehicleIsInAir, return false;);
    
    UFUNCTION(BlueprintCallable)
    void VehicleGameplayCue_Damage(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) override PURE_VIRTUAL(VehicleGameplayCue_Damage,);
    
    UFUNCTION(BlueprintCallable)
    bool ShowVehicleHealthBarOnPlayerHUD() const override PURE_VIRTUAL(ShowVehicleHealthBarOnPlayerHUD, return false;);
    
    UFUNCTION(BlueprintCallable)
    void SetShootingCone(const int32 SeatIdx, FAthenaVehicleShootingCone InCone) override PURE_VIRTUAL(SetShootingCone,);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreNextFallingDamage(bool bInIgnoreNextFallingDamage) override PURE_VIRTUAL(SetIgnoreNextFallingDamage,);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreAllFallingDamage(bool InIgnoreAllFallingDamage) override PURE_VIRTUAL(SetIgnoreAllFallingDamage,);
    
    UFUNCTION(BlueprintCallable)
    void SetHealthPercent(float Percent) override PURE_VIRTUAL(SetHealthPercent,);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedToAlwaysSpawn(const bool bSetTo) override PURE_VIRTUAL(SetForcedToAlwaysSpawn,);
    
    UFUNCTION(BlueprintCallable)
    void SetDestroyOnLastExit(bool bSetTo) override PURE_VIRTUAL(SetDestroyOnLastExit,);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentFocusedSocketLocation(const int32 SeatIndex) override PURE_VIRTUAL(SetCurrentFocusedSocketLocation,);
    
    UFUNCTION(BlueprintCallable)
    void SetActorBase(AActor* InActorBase, const int32 SeatIndex) override PURE_VIRTUAL(SetActorBase,);
    
    UFUNCTION(BlueprintCallable)
    bool SeatIsTurret(const int32 SeatIndex) const override PURE_VIRTUAL(SeatIsTurret, return false;);
    
    UFUNCTION(BlueprintCallable)
    void ResetTrick() override PURE_VIRTUAL(ResetTrick,);
    
    UFUNCTION(BlueprintCallable)
    void OverrideCurrentWrap(const UAthenaItemWrapDefinition* LoadedWrap) override PURE_VIRTUAL(OverrideCurrentWrap,);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyAudioComponentVehicleTriggered(UAudioComponent* AudioComponent, int32 Priority) override PURE_VIRTUAL(NotifyAudioComponentVehicleTriggered,);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsTouchingGround() const override PURE_VIRTUAL(IsTouchingGround, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsInWater() const override PURE_VIRTUAL(IsInWater, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsIdling() const override PURE_VIRTUAL(IsIdling, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsDestructible() const override PURE_VIRTUAL(IsDestructible, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsBoosting() const override PURE_VIRTUAL(IsBoosting, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsAsleep() const override PURE_VIRTUAL(IsAsleep, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasSeatCollision(const int32 SeatIndex) override PURE_VIRTUAL(HasSeatCollision, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasEverContainedPlayers() const override PURE_VIRTUAL(HasEverContainedPlayers, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasDriver() const override PURE_VIRTUAL(HasDriver, return false;);
    
    UFUNCTION(BlueprintCallable)
    float GetWaterDepth() const override PURE_VIRTUAL(GetWaterDepth, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVehicleVelocity() const override PURE_VIRTUAL(GetVehicleVelocity, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetVehicleTags() const override PURE_VIRTUAL(GetVehicleTags, return FGameplayTagContainer{};);
    
    UFUNCTION(BlueprintCallable)
    UFortVehicleSeatComponent* GetVehicleSeatComponentPtr() override PURE_VIRTUAL(GetVehicleSeatComponentPtr, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FText GetVehicleSeatChoiceDisplayText(const int32 SeatIndex) const override PURE_VIRTUAL(GetVehicleSeatChoiceDisplayText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FRotator GetVehicleRotation() const override PURE_VIRTUAL(GetVehicleRotation, return FRotator{};);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVehicleRightVector() const override PURE_VIRTUAL(GetVehicleRightVector, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerStateZone* GetVehiclePlayerState(const AFortPlayerPawn* PlayerPawn) const override PURE_VIRTUAL(GetVehiclePlayerState, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FVector GetVehicleForwardVector() const override PURE_VIRTUAL(GetVehicleForwardVector, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    FName GetVehicleExitActionName(AFortPlayerPawn* FortPlayerPawn) const override PURE_VIRTUAL(GetVehicleExitActionName, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerControllerZone* GetVehicleController(AFortPlayerPawn* PlayerPawn) const override PURE_VIRTUAL(GetVehicleController, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FName GetVehicleChangeSeatActionName(AFortPlayerPawn* FortPlayerPawn) const override PURE_VIRTUAL(GetVehicleChangeSeatActionName, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetVehicleActorPtrConst() const override PURE_VIRTUAL(GetVehicleActorPtrConst, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetVehicleActorPtr() override PURE_VIRTUAL(GetVehicleActorPtr, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UAbilitySystemComponent* GetVehicleAbilitySystemComponent() const override PURE_VIRTUAL(GetVehicleAbilitySystemComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FVector GetStandingFiringOffsetForSeat(const int32 SeatIdx) const override PURE_VIRTUAL(GetStandingFiringOffsetForSeat, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    bool GetShootingCone(const int32 SeatIdx, FTransform& OutConeTM, FAthenaVehicleShootingCone& OutCone) const override PURE_VIRTUAL(GetShootingCone, return false;);
    
    UFUNCTION(BlueprintCallable)
    UFortVehicleSeatWeaponComponent* GetSeatWeaponComponent(const int32 SeatIndex) const override PURE_VIRTUAL(GetSeatWeaponComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    float GetSeatSwitchCooldown(const int32 SeatIndex) const override PURE_VIRTUAL(GetSeatSwitchCooldown, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerPawn* GetPawnAtSeat(const int32 SeatIdx) const override PURE_VIRTUAL(GetPawnAtSeat, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FVector GetOwnerLocation() const override PURE_VIRTUAL(GetOwnerLocation, return FVector{};);
    
    
    float GetMaxHealth() const override PURE_VIRTUAL(GetMaxHealth, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    FVector GetIndicatorRelativeOffset() const override PURE_VIRTUAL(GetIndicatorRelativeOffset, return FVector{};);
    
    
    float GetHealth() const override PURE_VIRTUAL(GetHealth, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetGameplayTags() const override PURE_VIRTUAL(GetGameplayTags, return FGameplayTagContainer{};);
    
    UFUNCTION(BlueprintCallable)
    bool GetForcedToAlwaysSpawn() const override PURE_VIRTUAL(GetForcedToAlwaysSpawn, return false;);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetExitSocketTransform(const int32 SeatIndex, const int32 SocketIndex) const override PURE_VIRTUAL(GetExitSocketTransform, return FTransform{};);
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerPawn* GetDriver() const override PURE_VIRTUAL(GetDriver, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FString GetDisplayName() const override PURE_VIRTUAL(GetDisplayName, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    FVector GetCrouchingFiringOffsetForSeat(const int32 SeatIdx) const override PURE_VIRTUAL(GetCrouchingFiringOffsetForSeat, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    TArray<AFortPlayerPawn*> GetAllPassengers() const override PURE_VIRTUAL(GetAllPassengers, return TArray<AFortPlayerPawn*>(););
    
    UFUNCTION(BlueprintCallable)
    int32 FindSeatIndex(const AFortPlayerPawn* PlayerPawn) const override PURE_VIRTUAL(FindSeatIndex, return 0;);
    
    UFUNCTION()
    void ExitReleasedFromSeat(const int32 FromSeatIndex) override PURE_VIRTUAL(ExitReleasedFromSeat,);
    
    UFUNCTION()
    void ExitPressedFromSeat(const int32 FromSeatIndex) override PURE_VIRTUAL(ExitPressedFromSeat,);
    
    UFUNCTION()
    void ExitActivatedFromSeat(const int32 FromSeatIndex) override PURE_VIRTUAL(ExitActivatedFromSeat,);
    
    UFUNCTION(BlueprintCallable)
    bool EjectSeat(const int32 SeatIndex) override PURE_VIRTUAL(EjectSeat, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool EjectPlayerPawn(const AFortPlayerPawn* InPlayerPawn) override PURE_VIRTUAL(EjectPlayerPawn, return false;);
    
    UFUNCTION(BlueprintCallable)
    void EjectAllPlayers() override PURE_VIRTUAL(EjectAllPlayers,);
    
    UFUNCTION(BlueprintCallable)
    void DisableTrickCredit(float Duration) override PURE_VIRTUAL(DisableTrickCredit,);
    
    UFUNCTION(BlueprintCallable)
    void DestroyVehicle() override PURE_VIRTUAL(DestroyVehicle,);
    
    UFUNCTION(BlueprintCallable)
    bool ContainsPlayers() const override PURE_VIRTUAL(ContainsPlayers, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool ClientIsDriver() const override PURE_VIRTUAL(ClientIsDriver, return false;);
    
    UFUNCTION()
    void ChangeSeatFromIndex(const int32 FromSeatIndex) override PURE_VIRTUAL(ChangeSeatFromIndex,);
    
    UFUNCTION()
    void ChangeSeat() override PURE_VIRTUAL(ChangeSeat,);
    
    UFUNCTION(BlueprintCallable)
    bool CanTeleport() const override PURE_VIRTUAL(CanTeleport, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool CanShootFromSeat(const int32 SeatIndex) const override PURE_VIRTUAL(CanShootFromSeat, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool CanContainPlayers() const override PURE_VIRTUAL(CanContainPlayers, return false;);
    
    UFUNCTION(BlueprintCallable)
    void CallWeaponFired(UFortVehicleSeatWeaponComponent* WeaponComponent, float Overheat) override PURE_VIRTUAL(CallWeaponFired,);
    
    UFUNCTION(BlueprintCallable)
    void CallGunOverheat(UFortVehicleSeatWeaponComponent* WeaponComponent) override PURE_VIRTUAL(CallGunOverheat,);
    
    UFUNCTION(BlueprintCallable)
    bool BlocksBuilding() const override PURE_VIRTUAL(BlocksBuilding, return false;);
    
protected:
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* ApplyMaterialAndUseWrapIfPossible(UMaterialInterface* MaterialToUse, int32 SlotIndex, bool bAlwaysCreateMID) override PURE_VIRTUAL(ApplyMaterialAndUseWrapIfPossible, return NULL;);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddVehicleActionNamesAndLabels(AFortPlayerPawn* FortPlayerPawn, UPARAM(Ref) TArray<FName>& SeatActionNames, UPARAM(Ref) TArray<FText>& SeatActionLabels) override PURE_VIRTUAL(AddVehicleActionNamesAndLabels,);
    
};

