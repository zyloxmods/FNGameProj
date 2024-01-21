#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "PickupInstigatorData.h"
#include "PickupInstigator.generated.h"

USTRUCT(BlueprintType)
struct FPickupInstigator : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickupInstigatorData InstigatorData;
    
    FORTNITEGAME_API FPickupInstigator();
};

