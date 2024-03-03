#pragma once
#include "CoreMinimal.h"
#include "SupplyDropItemDeliverySpawnData.generated.h"

USTRUCT(BlueprintType)
struct FSupplyDropItemDeliverySpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumItemsToDeliver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> QueuedSpawnTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumInitialSpawns;
    
    FORTNITEGAME_API FSupplyDropItemDeliverySpawnData();
};

