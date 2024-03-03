#pragma once
#include "CoreMinimal.h"
#include "EFortMutatorReturnValue.generated.h"

UENUM(BlueprintType)
enum class EFortMutatorReturnValue : uint8 {
    Ignore,
    Override,
    OverrideReturn,
};

