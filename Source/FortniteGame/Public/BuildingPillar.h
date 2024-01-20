#pragma once
#include "CoreMinimal.h"
#include "BuildingAutoNav.h"
#include "BuildingPillar.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ABuildingPillar : public ABuildingAutoNav {
    GENERATED_BODY()
public:
    ABuildingPillar();
};

