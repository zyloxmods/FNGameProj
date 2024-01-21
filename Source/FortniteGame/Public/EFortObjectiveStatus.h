#pragma once
#include "CoreMinimal.h"
#include "EFortObjectiveStatus.generated.h"

UENUM(BlueprintType)
enum class EFortObjectiveStatus : uint8 {
    Created,
    InProgress,
    Succeeded,
    Failed,
    NeutralCompletion,
    Max_None,
};

