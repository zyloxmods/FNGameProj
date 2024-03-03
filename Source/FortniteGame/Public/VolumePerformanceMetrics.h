#pragma once
#include "CoreMinimal.h"
#include "EFortBudgetCategory.h"
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
    int32 PerformanceLowendThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewDeltaValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortBudgetCategory Category;
    
    FORTNITEGAME_API FVolumePerformanceMetrics();
};

