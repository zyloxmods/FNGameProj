#pragma once
#include "CoreMinimal.h"
#include "NitrogenPOITraversePoints.generated.h"

class ANitrogenTraversePoint;

USTRUCT(BlueprintType)
struct FNitrogenPOITraversePoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ANitrogenTraversePoint*> TraversePoints;
    
    NITROGENRUNTIME_API FNitrogenPOITraversePoints();
};

