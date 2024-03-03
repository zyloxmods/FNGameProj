#pragma once
#include "CoreMinimal.h"
#include "BuildingProp.h"
#include "SupplyDropSpawner.generated.h"

UCLASS(Blueprintable)
class ASupplyDropSpawner : public ABuildingProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpawnHeightOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpawnHeightOverride;
    
    ASupplyDropSpawner();
};

