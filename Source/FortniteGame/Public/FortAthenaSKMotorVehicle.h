#pragma once
#include "CoreMinimal.h"
#include "FortAthenaSKVehicle.h"
#include "FortAthenaSKMotorVehicle.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaSKMotorVehicle : public AFortAthenaSKVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AntiGravityScalerWhenEmpty;
    
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
    
public:
    AFortAthenaSKMotorVehicle();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpringCompression();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStandingInPlace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStandingInPlaceSteeringAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GasPedalIsDown() const;
    
};

