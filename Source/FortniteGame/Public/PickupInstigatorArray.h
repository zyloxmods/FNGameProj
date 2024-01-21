#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PickupInstigator.h"
#include "PickupInstigatorArray.generated.h"

USTRUCT(BlueprintType)
struct FPickupInstigatorArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPickupInstigator> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NextTrackedIndex;
    
    FORTNITEGAME_API FPickupInstigatorArray();
};

