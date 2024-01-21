#pragma once
#include "CoreMinimal.h"
#include "PotentiallyDestroyedBuilding.generated.h"

class ABuildingActor;

USTRUCT(BlueprintType)
struct FPotentiallyDestroyedBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingActor* BuildingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceCollision;
    
    FORTNITEGAME_API FPotentiallyDestroyedBuilding();
};

