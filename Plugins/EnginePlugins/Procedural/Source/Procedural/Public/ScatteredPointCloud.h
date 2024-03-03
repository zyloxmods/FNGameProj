#pragma once
#include "CoreMinimal.h"
#include "ProceduralScatterPoint.h"
#include "ScatteredPointCloud.generated.h"

USTRUCT(BlueprintType)
struct FScatteredPointCloud {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProceduralScatterPoint> Points;
    
public:
    PROCEDURAL_API FScatteredPointCloud();
};

