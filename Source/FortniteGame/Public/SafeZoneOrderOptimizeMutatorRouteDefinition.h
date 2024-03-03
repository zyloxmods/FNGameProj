#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SafeZoneOrderOptimizeMutatorRouteDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSafeZoneOrderOptimizeMutatorRouteDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DebugName;
    
    FORTNITEGAME_API FSafeZoneOrderOptimizeMutatorRouteDefinition();
};

