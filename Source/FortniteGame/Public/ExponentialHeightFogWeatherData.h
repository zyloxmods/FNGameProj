#pragma once
#include "CoreMinimal.h"
#include "ExponentialHeightFogWeatherData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FExponentialHeightFogWeatherData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FogDensityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FogHeightFalloffScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SecondFogDensityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SecondFogHeightFalloffScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SecondHeightFogOffsetBias;
    
    FORTNITEGAME_API FExponentialHeightFogWeatherData();
};

