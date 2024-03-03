#pragma once
#include "CoreMinimal.h"
#include "VictoryPointIncreasesEntry.generated.h"

USTRUCT(BlueprintType)
struct FVictoryPointIncreasesEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CapturePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VictoryPointIncrease;
    
    HYDROGENRUNTIME_API FVictoryPointIncreasesEntry();
};

