#pragma once
#include "CoreMinimal.h"
#include "EPatrollingMode.generated.h"

UENUM(BlueprintType)
enum class EPatrollingMode : uint8 {
    BackAndForth,
    Loop,
};

