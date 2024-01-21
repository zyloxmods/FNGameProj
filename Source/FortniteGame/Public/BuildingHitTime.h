#pragma once
#include "CoreMinimal.h"
#include "BuildingHitTime.generated.h"

class ABuildingActor;

USTRUCT(BlueprintType)
struct FBuildingHitTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingActor* HitBuilding;
    
    FORTNITEGAME_API FBuildingHitTime();
};

