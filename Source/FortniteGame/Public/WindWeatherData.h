#pragma once
#include "CoreMinimal.h"
#include "WindWeatherData.generated.h"

class UCurveFloat;
class UCurveVector;

USTRUCT(BlueprintType)
struct FWindWeatherData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* WindDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* WindStrength;
    
    FORTNITEGAME_API FWindWeatherData();
};

