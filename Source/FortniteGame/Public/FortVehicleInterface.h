#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "AthenaVehicleShootingCone.h"
#include "FortVehicleInterface.generated.h"

class AActor;
class AFortPlayerControllerZone;
class AFortPlayerPawn;
class AFortPlayerStateZone;
class UAbilitySystemComponent;
class UAthenaItemWrapDefinition;
class UAudioComponent;
class UFortVehicleSeatComponent;
class UFortVehicleSeatWeaponComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USkeletalMeshComponent;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UFortVehicleInterface : public UInterface {
    GENERATED_BODY()
};

class IFortVehicleInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void WakeUp() PURE_VIRTUAL(WakeUp,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool VehicleIsInSkyTube() const PURE_VIRTUAL(VehicleIsInSkyTube, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool VehicleIsInAir() const PURE_VIRTUAL(VehicleIsInAir, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void VehicleGameplayCue_Damage(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) PURE_VIRTUAL(VehicleGameplayCue_Damage,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool ShowVehicleHealthBarOnPlayerHUD() const PURE_VIRTUAL(ShowVehicleHealthBarOnPlayerHUD, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetShootingCone(const int32 SeatIdx, FAthenaVehicleShootingCone InCone) PURE_VIRTUAL(SetShootingCone,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetIgnoreNextFallingDamage(bool bInIgnoreNextFallingDamage) PURE_VIRTUAL(SetIgnoreNextFallingDamage,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetIgnoreAllFallingDamage(bool InIgnoreAllFallingDamage) PURE_VIRTUAL(SetIgnoreAllFallingDamage,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetHealthPercent(float Percent) PURE_VIRTUAL(SetHealthPercent,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetForcedToAlwaysSpawn(const bool bSetTo) PURE_VIRTUAL(SetForcedToAlwaysSpawn,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetDestroyOnLastExit(bool bSetTo) PURE_VIRTUAL(SetDestroyOnLastExit,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetCurrentFocusedSocketLocation(const int32 SeatIndex) PURE_VIRTUAL(SetCurrentFocusedSocketLocation,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetActorBase(AActor* InActorBase, const int32 SeatIndex) PURE_VIRTUAL(SetActorBase,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool SeatIsTurret(const int32 SeatIndex) const PURE_VIRTUAL(SeatIsTurret, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void ResetTrick() PURE_VIRTUAL(ResetTrick,);
    
    UFUNCTION(BlueprintCallable)
    virtual void OverrideCurrentWrap(const UAthenaItemWrapDefinition* LoadedWrap) PURE_VIRTUAL(OverrideCurrentWrap,);
    
protected:
    UFUNCTION(BlueprintCallable)
    virtual void NotifyAudioComponentVehicleTriggered(UAudioComponent* AudioComponent, int32 Priority) PURE_VIRTUAL(NotifyAudioComponentVehicleTriggered,);
    
public:
    UFUNCTION(BlueprintCallable)
    virtual bool IsTouchingGround() const PURE_VIRTUAL(IsTouchingGround, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsInWater() const PURE_VIRTUAL(IsInWater, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsIdling() const PURE_VIRTUAL(IsIdling, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsDestructible() const PURE_VIRTUAL(IsDestructible, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsBoosting() const PURE_VIRTUAL(IsBoosting, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsAsleep() const PURE_VIRTUAL(IsAsleep, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasSeatCollision(const int32 SeatIndex) PURE_VIRTUAL(HasSeatCollision, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasEverContainedPlayers() const PURE_VIRTUAL(HasEverContainedPlayers, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasDriver() const PURE_VIRTUAL(HasDriver, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetWaterDepth() const PURE_VIRTUAL(GetWaterDepth, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetVehicleVelocity() const PURE_VIRTUAL(GetVehicleVelocity, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FGameplayTagContainer GetVehicleTags() const PURE_VIRTUAL(GetVehicleTags, return FGameplayTagContainer{};);
    
    UFUNCTION(BlueprintCallable)
    virtual UFortVehicleSeatComponent* GetVehicleSeatComponentPtr() PURE_VIRTUAL(GetVehicleSeatComponentPtr, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetVehicleSeatChoiceDisplayText(const int32 SeatIndex) const PURE_VIRTUAL(GetVehicleSeatChoiceDisplayText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual FRotator GetVehicleRotation() const PURE_VIRTUAL(GetVehicleRotation, return FRotator{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetVehicleRightVector() const PURE_VIRTUAL(GetVehicleRightVector, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual AFortPlayerStateZone* GetVehiclePlayerState(const AFortPlayerPawn* PlayerPawn) const PURE_VIRTUAL(GetVehiclePlayerState, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetVehicleForwardVector() const PURE_VIRTUAL(GetVehicleForwardVector, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FName GetVehicleExitActionName(AFortPlayerPawn* FortPlayerPawn) const PURE_VIRTUAL(GetVehicleExitActionName, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    virtual AFortPlayerControllerZone* GetVehicleController(AFortPlayerPawn* PlayerPawn) const PURE_VIRTUAL(GetVehicleController, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual FName GetVehicleChangeSeatActionName(AFortPlayerPawn* FortPlayerPawn) const PURE_VIRTUAL(GetVehicleChangeSeatActionName, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    virtual AActor* GetVehicleActorPtrConst() const PURE_VIRTUAL(GetVehicleActorPtrConst, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual AActor* GetVehicleActorPtr() PURE_VIRTUAL(GetVehicleActorPtr, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual UAbilitySystemComponent* GetVehicleAbilitySystemComponent() const PURE_VIRTUAL(GetVehicleAbilitySystemComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetStandingFiringOffsetForSeat(const int32 SeatIdx) const PURE_VIRTUAL(GetStandingFiringOffsetForSeat, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual USkeletalMeshComponent* GetSkeletalMeshComponent() const PURE_VIRTUAL(GetSkeletalMeshComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetShootingCone(const int32 SeatIdx, FTransform& OutConeTM, FAthenaVehicleShootingCone& OutCone) const PURE_VIRTUAL(GetShootingCone, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual UFortVehicleSeatWeaponComponent* GetSeatWeaponComponent(const int32 SeatIndex) const PURE_VIRTUAL(GetSeatWeaponComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetSeatSwitchCooldown(const int32 SeatIndex) const PURE_VIRTUAL(GetSeatSwitchCooldown, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual AFortPlayerPawn* GetPawnAtSeat(const int32 SeatIdx) const PURE_VIRTUAL(GetPawnAtSeat, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetOwnerLocation() const PURE_VIRTUAL(GetOwnerLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetMaxHealth() const PURE_VIRTUAL(GetMaxHealth, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetIndicatorRelativeOffset() const PURE_VIRTUAL(GetIndicatorRelativeOffset, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetHealth() const PURE_VIRTUAL(GetHealth, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual FGameplayTagContainer GetGameplayTags() const PURE_VIRTUAL(GetGameplayTags, return FGameplayTagContainer{};);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetForcedToAlwaysSpawn() const PURE_VIRTUAL(GetForcedToAlwaysSpawn, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FTransform GetExitSocketTransform(const int32 SeatIndex, const int32 SocketIndex) const PURE_VIRTUAL(GetExitSocketTransform, return FTransform{};);
    
    UFUNCTION(BlueprintCallable)
    virtual AFortPlayerPawn* GetDriver() const PURE_VIRTUAL(GetDriver, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual FString GetDisplayName() const PURE_VIRTUAL(GetDisplayName, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetCrouchingFiringOffsetForSeat(const int32 SeatIdx) const PURE_VIRTUAL(GetCrouchingFiringOffsetForSeat, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<AFortPlayerPawn*> GetAllPassengers() const PURE_VIRTUAL(GetAllPassengers, return TArray<AFortPlayerPawn*>(););
    
    UFUNCTION(BlueprintCallable)
    virtual int32 FindSeatIndex(const AFortPlayerPawn* PlayerPawn) const PURE_VIRTUAL(FindSeatIndex, return 0;);
    
    UFUNCTION()
    virtual void ExitReleasedFromSeat(const int32 FromSeatIndex) PURE_VIRTUAL(ExitReleasedFromSeat,);
    
    UFUNCTION()
    virtual void ExitPressedFromSeat(const int32 FromSeatIndex) PURE_VIRTUAL(ExitPressedFromSeat,);
    
    UFUNCTION()
    virtual void ExitActivatedFromSeat(const int32 FromSeatIndex) PURE_VIRTUAL(ExitActivatedFromSeat,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool EjectSeat(const int32 SeatIndex) PURE_VIRTUAL(EjectSeat, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool EjectPlayerPawn(const AFortPlayerPawn* InPlayerPawn) PURE_VIRTUAL(EjectPlayerPawn, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void EjectAllPlayers() PURE_VIRTUAL(EjectAllPlayers,);
    
    UFUNCTION(BlueprintCallable)
    virtual void DisableTrickCredit(float Duration) PURE_VIRTUAL(DisableTrickCredit,);
    
    UFUNCTION(BlueprintCallable)
    virtual void DestroyVehicle() PURE_VIRTUAL(DestroyVehicle,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool ContainsPlayers() const PURE_VIRTUAL(ContainsPlayers, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool ClientIsDriver() const PURE_VIRTUAL(ClientIsDriver, return false;);
    
    UFUNCTION()
    virtual void ChangeSeatFromIndex(const int32 FromSeatIndex) PURE_VIRTUAL(ChangeSeatFromIndex,);
    
    UFUNCTION()
    virtual void ChangeSeat() PURE_VIRTUAL(ChangeSeat,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanTeleport() const PURE_VIRTUAL(CanTeleport, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanShootFromSeat(const int32 SeatIndex) const PURE_VIRTUAL(CanShootFromSeat, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanContainPlayers() const PURE_VIRTUAL(CanContainPlayers, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void CallWeaponFired(UFortVehicleSeatWeaponComponent* WeaponComponent, float Overheat) PURE_VIRTUAL(CallWeaponFired,);
    
    UFUNCTION(BlueprintCallable)
    virtual void CallGunOverheat(UFortVehicleSeatWeaponComponent* WeaponComponent) PURE_VIRTUAL(CallGunOverheat,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BlocksBuilding() const PURE_VIRTUAL(BlocksBuilding, return false;);
    
protected:
    UFUNCTION(BlueprintCallable)
    virtual UMaterialInstanceDynamic* ApplyMaterialAndUseWrapIfPossible(UMaterialInterface* MaterialToUse, int32 SlotIndex, bool bAlwaysCreateMID) PURE_VIRTUAL(ApplyMaterialAndUseWrapIfPossible, return NULL;);
    
public:
    UFUNCTION(BlueprintCallable)
    virtual void AddVehicleActionNamesAndLabels(AFortPlayerPawn* FortPlayerPawn, UPARAM(Ref) TArray<FName>& SeatActionNames, UPARAM(Ref) TArray<FText>& SeatActionLabels) PURE_VIRTUAL(AddVehicleActionNamesAndLabels,);
    
};

