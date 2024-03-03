#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortPieSliceSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FFortPieSliceSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SpawnDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SpawnDirectionDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinSpawnDistanceFromCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxSpawnDistanceFromCenter;
    
    FORTNITEGAME_API FFortPieSliceSpawnData();
};

