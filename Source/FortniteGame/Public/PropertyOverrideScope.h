#pragma once
#include "CoreMinimal.h"
#include "PropertyOverride.h"
#include "PropertyOverrideScope.generated.h"

USTRUCT(BlueprintType)
struct FPropertyOverrideScope {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPropertyOverride> PropertyOverrides;
    
    FORTNITEGAME_API FPropertyOverrideScope();
};

