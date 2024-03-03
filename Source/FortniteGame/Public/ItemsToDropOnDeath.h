#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "ItemsToDropOnDeath.generated.h"

class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FItemsToDropOnDeath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* ItemToDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumberToDrop;
    
    FORTNITEGAME_API FItemsToDropOnDeath();
};

