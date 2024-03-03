#pragma once
#include "CoreMinimal.h"
#include "SafeZoneOrderOptimizeMutatorRouteOrder.generated.h"

USTRUCT(BlueprintType)
struct FSafeZoneOrderOptimizeMutatorRouteOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RouteIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalDistance;
    
    FORTNITEGAME_API FSafeZoneOrderOptimizeMutatorRouteOrder();
};

