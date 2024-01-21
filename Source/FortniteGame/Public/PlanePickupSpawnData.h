#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PlanePickupSpawnData.generated.h"

class AAthenaGoosePickup;

USTRUCT(BlueprintType)
struct FPlanePickupSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAthenaGoosePickup> PickupClass;
    
    FORTNITEGAME_API FPlanePickupSpawnData();
};

