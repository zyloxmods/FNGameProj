#pragma once
#include "CoreMinimal.h"
#include "FortItemDeliverySupplyDropMutatorData.h"
#include "FortSupplyDropMutatorData.generated.h"

USTRUCT(BlueprintType)
struct FFortSupplyDropMutatorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SupplyDropID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCenterGroundCheckAtFoundLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemDeliverySupplyDropMutatorData> ItemDeliveryMutatorPerSafeZonePhase;
    
    FORTNITEGAME_API FFortSupplyDropMutatorData();
};

