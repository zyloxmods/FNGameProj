#pragma once
#include "CoreMinimal.h"
#include "ESpawnResult.generated.h"

UENUM(BlueprintType)
enum class ESpawnResult : uint8 {
    Success,
    Failure_NoLocationFound,
    Failure_NoActorClass,
    Failure_BadQueryData,
};

