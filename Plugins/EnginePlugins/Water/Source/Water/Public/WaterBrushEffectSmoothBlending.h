#pragma once
#include "CoreMinimal.h"
#include "WaterBrushEffectSmoothBlending.generated.h"

USTRUCT(BlueprintType)
struct FWaterBrushEffectSmoothBlending {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerSmoothDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterSmoothDistance;
    
    WATER_API FWaterBrushEffectSmoothBlending();
};

