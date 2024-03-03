#pragma once
#include "CoreMinimal.h"
#include "EVehicleAudioInterpolationType.h"
#include "FortVehicleAudioParam.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FFortVehicleAudioParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleAudioInterpolationType InterpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReleaseSpeed;
    
    FORTNITEGAME_API FFortVehicleAudioParam();
};

