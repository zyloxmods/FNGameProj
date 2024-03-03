#pragma once
#include "CoreMinimal.h"
#include "WaterBrushEffectCurlNoise.generated.h"

USTRUCT(BlueprintType)
struct FWaterBrushEffectCurlNoise {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Curl1Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Curl2Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Curl1Tiling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Curl2Tiling;
    
    WATER_API FWaterBrushEffectCurlNoise();
};

