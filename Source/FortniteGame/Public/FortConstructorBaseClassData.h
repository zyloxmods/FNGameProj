#pragma once
#include "CoreMinimal.h"
#include "BuildingPropClassData.h"
#include "FortConstructorBaseClassData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortConstructorBaseClassData : public FBuildingPropClassData {
    GENERATED_BODY()
public:
    FFortConstructorBaseClassData();
};

