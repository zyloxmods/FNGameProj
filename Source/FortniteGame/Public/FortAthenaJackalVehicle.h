#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "FortAthenaSKVehicle.h"
#include "FortRechargingActionTimer.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaJackalVehicle.generated.h"

class AActor;
class UAnimInstance;
class UAudioComponent;
class UFortAthenaJackalVehicleConfigs;
class UFortCameraMode_AthenaVehicle;
class UFortVehicleAudioVoice;
class UMaterialInstanceDynamic;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class AFortAthenaJackalVehicle : public AFortAthenaSKVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaJackalVehicleConfigs> FortJackalVehicleConfigsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaJackalVehicleConfigs* FortJackalVehicleConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBoostTimers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortRechargingActionTimer> BoostTimers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AbortSprintPlayerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PreventBoostPlayerTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode_AthenaVehicle> SprintCameraModeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCameraMode_AthenaVehicle> BoostCameraModeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float JumpCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float JumpCooldownRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* CacheBoostFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* CacheLoopingFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BoostMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* CacheAudioMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* CacheAudioBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* CacheAudioWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector FrontSpringFXOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector RearSpringFXOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector FXBoostEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> BoostingAnimClass;
    
public:
    AFortAthenaJackalVehicle();
    UFUNCTION(BlueprintCallable)
    void OnWeaponUnholstered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumped(float Charge);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpChargeEnd(float Charge);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpChargeBegin();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHeldObjectPickedUp(AActor* HeldObject);
    
    UFUNCTION(BlueprintCallable)
    void OnHeldObjectDropped(AActor* HeldObject);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDriveModeChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBoostBegin();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnBoostEnd();
    
    UFUNCTION(BlueprintCallable)
    void NativeOnBoostBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDriveModeOnly() const;
    
    
    bool IsBoosting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpringHitLocation(int32 SpringIndex, FVector& HitLocation) const;
    
    UFUNCTION(BlueprintCallable)
    FFortRechargingActionTimer GetCurrentBoostTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBoostCandidateIndex() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckWater(float WaterLocationZ, UParticleSystemComponent* WaterFX, UAudioComponent* WaterAudio);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChargeJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBoost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivateBoost() const;
    
    UFUNCTION(BlueprintCallable)
    void CacheFX(UParticleSystemComponent* InBoostFX, UParticleSystemComponent* InLoopingFX);
    
    UFUNCTION(BlueprintCallable)
    void CacheAudioPointers(UFortVehicleAudioVoice* InAudioMovement, UFortVehicleAudioVoice* InAudioBoost, UFortVehicleAudioVoice* InAudioWind);
    
};

