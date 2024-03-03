#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EventItemNamedWeight.generated.h"

USTRUCT(BlueprintType)
struct FEventItemNamedWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeightName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WeightValue;
    
    FORTNITEGAME_API FEventItemNamedWeight();
};

