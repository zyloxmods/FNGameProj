#pragma once
#include "CoreMinimal.h"
#include "SupplyDropItemDeliverySpawnData.h"
#include "SupplyDropZoneBasedSpawnData.h"
#include "SupplyDropSpawnData.generated.h"

class UFortSupplyDropInfo;

USTRUCT(BlueprintType)
struct FSupplyDropSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSupplyDropInfo* SupplyDropInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSupplyDropZoneBasedSpawnData ZoneBasedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSupplyDropItemDeliverySpawnData ItemDeliveryData;
    
    FORTNITEGAME_API FSupplyDropSpawnData();
};

