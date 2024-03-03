#pragma once
#include "CoreMinimal.h"
#include "HeightFogAltitudeWeatherData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FHeightFogAltitudeWeatherData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* HeightFogZOffset;
    
    FORTNITEGAME_API FHeightFogAltitudeWeatherData();
};

