#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "ItemsToGive.generated.h"

class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FItemsToGive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* ItemToDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumberToGive;
    
    FORTNITEGAME_API FItemsToGive();
};

