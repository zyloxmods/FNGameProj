#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AthenaLoadoutEntry.generated.h"

class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FAthenaLoadoutEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* ItemToGrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumberOfItemsToGrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DesiredSlot;
    
    FORTNITEGAME_API FAthenaLoadoutEntry();
};

