#pragma once
#include "CoreMinimal.h"
#include "BuildingSMActorClassData.h"
#include "BuildingTrapClassData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FBuildingTrapClassData : public FBuildingSMActorClassData {
    GENERATED_BODY()
public:
    FBuildingTrapClassData();
};

