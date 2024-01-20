#pragma once
#include "CoreMinimal.h"
#include "PlayerWaypointContext.generated.h"

class ABuildingTrapFloor_Waypoint;
class APlayerState;

USTRUCT(BlueprintType)
struct FPlayerWaypointContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingTrapFloor_Waypoint* Waypoint;
    
    FORTNITEGAME_API FPlayerWaypointContext();
};

