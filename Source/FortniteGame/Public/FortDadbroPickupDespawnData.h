#pragma once
#include "CoreMinimal.h"
#include "FortDadbroPickupDespawnData.generated.h"

class AFortPickup;

USTRUCT(BlueprintType)
struct FFortDadbroPickupDespawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPickup* Pickup;
    
    FORTNITEGAME_API FFortDadbroPickupDespawnData();
};

