#pragma once
#include "CoreMinimal.h"
#include "WaterBrushEffectBlurring.generated.h"

USTRUCT(BlueprintType)
struct FWaterBrushEffectBlurring {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlurShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Radius;
    
    WATER_API FWaterBrushEffectBlurring();
};

