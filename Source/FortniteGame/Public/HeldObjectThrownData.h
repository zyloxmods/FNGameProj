#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "HeldObjectThrownData.generated.h"

USTRUCT(BlueprintType)
struct FHeldObjectThrownData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GravityScale;
    
    FORTNITEGAME_API FHeldObjectThrownData();
};

