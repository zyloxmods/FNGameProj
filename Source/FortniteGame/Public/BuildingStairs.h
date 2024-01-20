#pragma once
#include "CoreMinimal.h"
#include "BuildingFloor.h"
#include "EBuildingStairsRailing.h"
#include "BuildingStairs.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ABuildingStairs : public ABuildingFloor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBuildingStairsRailing::Type> RailingType;
    
    ABuildingStairs();
};

