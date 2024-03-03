#pragma once
#include "CoreMinimal.h"
#include "ConstructionBuildingInfo.h"
#include "ConstructionBuildingList.generated.h"

USTRUCT(BlueprintType)
struct FConstructionBuildingList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstructionBuildingInfo BuildingList[6];
    
    FORTNITEGAME_API FConstructionBuildingList();
};

