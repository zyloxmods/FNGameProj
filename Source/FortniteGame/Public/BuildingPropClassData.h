#pragma once
#include "CoreMinimal.h"
#include "BuildingAutoNavClassData.h"
#include "BuildingPropClassData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FBuildingPropClassData : public FBuildingAutoNavClassData {
    GENERATED_BODY()
public:
    FBuildingPropClassData();
};

