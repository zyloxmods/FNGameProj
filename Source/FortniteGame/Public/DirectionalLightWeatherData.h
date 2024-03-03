#pragma once
#include "CoreMinimal.h"
#include "DirectionalLightWeatherData.generated.h"

class UCurveFloat;
class UCurveLinearColor;

USTRUCT(BlueprintType)
struct FDirectionalLightWeatherData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* DirectionalLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DirectionalLightColorWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DirectionalLightColorBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VolumetricScatteringIntensity;
    
    FORTNITEGAME_API FDirectionalLightWeatherData();
};

