#pragma once
#include "CoreMinimal.h"
#include "SkyAtmosphereWeatherData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FSkyAtmosphereWeatherData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MieScatteringScaleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MieAbsorptionScaleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* HeightFogContributionScale;
    
    FORTNITEGAME_API FSkyAtmosphereWeatherData();
};

