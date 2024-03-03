#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBuildingNavObstacleType.h"
#include "BuildingNavObstacle.generated.h"

USTRUCT(BlueprintType)
struct FBuildingNavObstacle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox LocalBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingNavObstacleType ObstacleType;
    
    FORTNITEGAME_API FBuildingNavObstacle();
};

