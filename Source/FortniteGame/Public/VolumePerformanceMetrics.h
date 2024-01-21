#pragma once
#include "CoreMinimal.h"
#include "VolumePerformanceMetrics.generated.h"

USTRUCT(BlueprintType)
struct FVolumePerformanceMetrics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PerformanceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PerformanceMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewDeltaValue;
    
    FORTNITEGAME_API FVolumePerformanceMetrics();
};

