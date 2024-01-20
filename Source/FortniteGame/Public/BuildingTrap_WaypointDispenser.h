#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingTrapFloor.h"
#include "Templates/SubclassOf.h"
#include "BuildingTrap_WaypointDispenser.generated.h"

class ABuildingTrapFloor_Waypoint;
class UFortTrapItemDefinition;

UCLASS(Blueprintable)
class ABuildingTrap_WaypointDispenser : public ABuildingTrapFloor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortTrapItemDefinition*> WaypointDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABuildingTrapFloor_Waypoint>> WaypointTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaypointTypeIndex;
    
    ABuildingTrap_WaypointDispenser();
    UFUNCTION(BlueprintCallable)
    ABuildingTrapFloor_Waypoint* BP_SpawnWaypointActor(TSubclassOf<ABuildingTrapFloor_Waypoint> Class, FTransform SpawnTransform);
    
};

