#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "HotfixableInventoryOverrideItem.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FHotfixableInventoryOverrideItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* Item;
    
    FORTNITEGAME_API FHotfixableInventoryOverrideItem();
};

