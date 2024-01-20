#pragma once
#include "CoreMinimal.h"
#include "BuildingActor.h"
#include "FortAthenaGrowthManager.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class AFortAthenaGrowthManager : public ABuildingActor {
    GENERATED_BODY()
public:
    AFortAthenaGrowthManager();
};

