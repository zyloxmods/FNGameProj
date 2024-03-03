#pragma once
#include "CoreMinimal.h"
#include "PropertyOverrideId.generated.h"

USTRUCT(BlueprintType)
struct FPropertyOverrideId {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 PropertyHashes;
    
    FORTNITEGAME_API FPropertyOverrideId();
};

