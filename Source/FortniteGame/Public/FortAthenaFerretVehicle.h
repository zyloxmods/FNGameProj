#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaDoghouseVehicle.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaFerretVehicle.generated.h"

class ABuildingActor;
class AFortPlayerPawn;
class UFortFerretVehicleConfigs;
class UFortVehicleAudioVoice;
class UGameplayEffect;
class UMaterialInstanceDynamic;
class UCameraShake;
class UParticleSystemComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaFerretVehicle : public AFortAthenaDoghouseVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BoostParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MovementParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RumbleIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBoostCameraActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLocalPlayerADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraShake* DriverCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraShake* PassengerCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* LocalPlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentMaxSpringCompression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringCompressionRefireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SparksRightParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MovementAmountParam;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPropSpeedWhenShooting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PSC_TrailTopLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PSC_TrailTopRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PSC_TrailBottomLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PSC_TrailBottomRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortFerretVehicleConfigs> FortFerretVehicleConfigsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BoostMeterSM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PropellerSM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BoostMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FuelGaugeMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PlaneSpeedFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* FortAudioMovementClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* FortAudioMovementDistant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* FortAudioWindFirstPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* FortAudioDive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* FortAudioTaxi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortVehicleAudioVoice* FortAudioSpark;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortFerretVehicleConfigs* FortFerretVehicleConfigs;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RightGunMuzzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LeftGunMuzzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float MaxHealthToDestroyPropWhileBoosting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float MaxHealthToDestroyPropWithDirectHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float MaxHealthToDestroyProp;
    
    AFortAthenaFerretVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SmashedThroughBuildingPiece(const FVector& ImpactPoint, const FVector& ImpactNormal, const ABuildingActor* BuildingHitActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCooldownCueFired(AFortPlayerPawn* Pawn, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCooldownCueBoost(AFortPlayerPawn* Pawn, float Duration);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetSkidActive(bool bActive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGrantWeaponGE(TSubclassOf<UGameplayEffect> NewGE);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpringCompression();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LandedWithNoFuel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTryingToShoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShooting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerRiding() const;
    
    
    bool IsBoosting() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CachePropAndBoostMeterSM(UStaticMeshComponent* InPropSM, UStaticMeshComponent* InBoostSM);
    
    UFUNCTION(BlueprintCallable)
    void CachePlaneFX(UParticleSystemComponent* InPlaneSpeedFX);
    
    UFUNCTION(BlueprintCallable)
    void CacheParticleComponentPointers(UParticleSystemComponent* InTrailTopLeft, UParticleSystemComponent* InTrailTopRight, UParticleSystemComponent* InTrailBottomLeft, UParticleSystemComponent* InTrailBottomRight);
    
    UFUNCTION(BlueprintCallable)
    void CacheAudioVoicePointers(UFortVehicleAudioVoice* InAudioMovementClose, UFortVehicleAudioVoice* InAudioMovementDistant, UFortVehicleAudioVoice* InAudioWindFirstPerson, UFortVehicleAudioVoice* InAudioDive, UFortVehicleAudioVoice* InAudioTaxi, UFortVehicleAudioVoice* InAudioSpark);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BoostEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BoostBegin();
    
};

