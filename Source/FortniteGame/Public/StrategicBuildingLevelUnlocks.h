#pragma once
#include "CoreMinimal.h"
#include "FortAbilitySetDeliveryInfo.h"
#include "ProximityBasedGEDeliveryInfo.h"
#include "StrategicBuildingLevelUnlocks.generated.h"

USTRUCT(BlueprintType)
struct FStrategicBuildingLevelUnlocks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAbilitySetDeliveryInfo> OwnerStrategicBuildingAbilitySetBuckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAbilitySetDeliveryInfo> PawnPersistentAbilitySetBuckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProximityBasedGEDeliveryInfo> ProximityBasedEffectBuckets;
    
    FORTNITEGAME_API FStrategicBuildingLevelUnlocks();
};

