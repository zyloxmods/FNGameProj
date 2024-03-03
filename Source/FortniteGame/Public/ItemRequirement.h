#pragma once
#include "CoreMinimal.h"
#include "ItemRequirement.generated.h"

class UFortAccountItemDefinition;

USTRUCT(BlueprintType)
struct FItemRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAccountItemDefinition* ItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMustOwnItem;
    
    FORTNITEGAME_API FItemRequirement();
};

