#pragma once
#include "CoreMinimal.h"
#include "ForcedPerks.generated.h"

class UFortSpyTechItemDefinition;

USTRUCT(BlueprintType)
struct FForcedPerks {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSpyTechItemDefinition* ForcedItems[6];
    
    FORTNITEGAME_API FForcedPerks();
};

