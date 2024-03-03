#pragma once
#include "CoreMinimal.h"
#include "PredictedDestroyedBuilding.generated.h"

class ABuildingActor;

USTRUCT(BlueprintType)
struct FPredictedDestroyedBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingActor* Building;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Time;
    
    FORTNITEGAME_API FPredictedDestroyedBuilding();
};

