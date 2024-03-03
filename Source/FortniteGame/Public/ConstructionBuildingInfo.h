#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ConstructionBuildingInfo.generated.h"

class ABuildingSMActor;

USTRUCT(BlueprintType)
struct FConstructionBuildingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingSMActor> BuildingActorClass[3];
    
    FORTNITEGAME_API FConstructionBuildingInfo();
};

