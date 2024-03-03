#pragma once
#include "CoreMinimal.h"
#include "EWaterBrushBlendType.h"
#include "WaterBrushEffects.h"
#include "WaterFalloffSettings.h"
#include "WaterBodyHeightmapSettings.generated.h"

USTRUCT(BlueprintType)
struct FWaterBodyHeightmapSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWaterBrushBlendType BlendMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterFalloffSettings FalloffSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaterBrushEffects Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    WATER_API FWaterBodyHeightmapSettings();
};

