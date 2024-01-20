#pragma once
#include "CoreMinimal.h"
#include "FortPlacementDistanceRequirements.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortPlacementDistanceRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceRangeMax;
    
    FFortPlacementDistanceRequirements();
};

