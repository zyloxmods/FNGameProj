#pragma once
#include "CoreMinimal.h"
#include "FortAbilitySetHandle.h"
#include "MutatorAbilitySetEntry.generated.h"

USTRUCT(BlueprintType)
struct FMutatorAbilitySetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortAbilitySetHandle> AppliedAbilitySetHandles;
    
    FORTNITEGAME_API FMutatorAbilitySetEntry();
};

