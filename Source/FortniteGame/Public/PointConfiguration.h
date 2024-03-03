#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PointConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FPointConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PointLocations;
    
    FORTNITEGAME_API FPointConfiguration();
};

