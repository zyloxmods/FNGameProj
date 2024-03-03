#pragma once
#include "CoreMinimal.h"
#include "SkylightWeatherData.generated.h"

class UCurveFloat;
class UCurveLinearColor;

USTRUCT(BlueprintType)
struct FSkylightWeatherData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* SkyLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SkyLightColorWeight;
    
    FORTNITEGAME_API FSkylightWeatherData();
};

