#pragma once
#include "CoreMinimal.h"
#include "ECoastState.h"
#include "FortAthenaSKVehicle.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaSKPushVehicle.generated.h"

class AFortPlayerPawn;
class UFortSKPushVehicleConfigs;
class UFortVehicleAudioVoice;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class AFortAthenaSKPushVehicle : public AFortAthenaSKVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AntiGravityScalerWhenEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AntiGravityScalerWhenCoasting;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringCompressionRefireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MovementAmountParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentMaxSpringCompression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SparksLeftParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SparksRightParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LeftSlowDustParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RightSlowDustParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LeftFastDustParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RightFastDustParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FastDustParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CoastingMovementParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SkiddingAmountParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InAirParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ScrapingAmountParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AudioWindParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSKPushVehicleConfigs> SKPushVehicleConfigsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSKPushVehicleConfigs* SKPushVehicleConfigs;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* CacheAudioMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* CacheAudioCoast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* CacheAudioSkid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* CacheAudioInAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* CacheAudioScrape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* CacheAudioWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* CacheWheelDustFX;
    
public:
    AFortAthenaSKPushVehicle();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayerWantsToCoast(bool bCheckAnimOnlyCoast) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpringCompression();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsCoastingChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStandingInPlace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyToPedalFromCoast() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMounting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndCoasting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDismountingFromCoast() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoasting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsApplyingPedalForce() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStandingInPlaceSteeringAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetShoppingCartCoastActionName(AFortPlayerPawn* FortPlayerPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECoastState GetCoastState(bool bGetPhysicsState) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CacheFX(UParticleSystemComponent* InWheelDustFX);
    
    UFUNCTION(BlueprintCallable)
    void CacheAudioPointers(UFortVehicleAudioVoice* InAudioMovement, UFortVehicleAudioVoice* InAudioCoast, UFortVehicleAudioVoice* InAudioSkid, UFortVehicleAudioVoice* InAudioInAir, UFortVehicleAudioVoice* InAudioScrape, UFortVehicleAudioVoice* InAudioWind);
    
};

