#pragma once
#include "CoreMinimal.h"
#include "WaterBrushEffectBlurring.h"
#include "WaterBrushEffectCurlNoise.h"
#include "WaterBrushEffectDisplacement.h"
#include "WaterBrushEffectSmoothBlending.h"
#include "WaterBrushEffectTerracing.h"
#include "WaterBrushEffects.generated.h"

USTRUCT(BlueprintType)
struct FWaterBrushEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterBrushEffectBlurring Blurring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterBrushEffectCurlNoise CurlNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterBrushEffectDisplacement Displacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterBrushEffectSmoothBlending SmoothBlending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterBrushEffectTerracing Terracing;
    
    WATER_API FWaterBrushEffects();
};

