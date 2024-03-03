#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaSKMotorVehicle.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaGoatVehicle.generated.h"

class AFortPlayerPawn;
class UCurveFloat;
class UFortGoatVehicleConfigs;
class UCameraShake;
class UParticleSystemComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaGoatVehicle : public AFortAthenaSKMotorVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeanPositionFR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanImpulseScaleFR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeanPositionBR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanImpulseScaleBR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeanPositionBL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanImpulseScaleBL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BounceOffsetFR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BounceOffsetBR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BounceOffsetBL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BounceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> BoostSlideColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HandBrakeSkidParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BoostParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MovementParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BatteryParam;
    
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
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PSC_WheelDust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PSC_WheelSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PSC_TrailLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PSC_TrailRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGoatVehicleConfigs> FortGoatVehicleConfigsClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortGoatVehicleConfigs* FortGoatVehicleConfigs;
    
public:
    AFortAthenaGoatVehicle();
private:
    UFUNCTION(BlueprintCallable)
    void SetSkidActive(bool bActive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PowerSlideEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PowerSlideBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPowerSliding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerRiding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeaningOrBouncingFR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeaningOrBouncingBR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeaningOrBouncingBL() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEBraking() const;
    
   
    bool IsBoosting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetGolfCartReverseActionName(AFortPlayerPawn* FortPlayerPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetGolfCartHonkActionName(AFortPlayerPawn* FortPlayerPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetGolfCartForwardActionName(AFortPlayerPawn* FortPlayerPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetGolfCartEBrakeActionName(AFortPlayerPawn* FortPlayerPawn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoostAccumulated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EBrakeEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EBrakeBegin();
    
    UFUNCTION(BlueprintCallable)
    void ClearBoostAccumulated();
    
private:
    UFUNCTION(BlueprintCallable)
    void CacheParticleComponentPointers(UParticleSystemComponent* WheelDust, UParticleSystemComponent* WheelSlide, UParticleSystemComponent* TrailLeft, UParticleSystemComponent* TrailRight);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BoostIncrease(int32 AccumulationStepIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BoostEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BoostBegin();
    
};

