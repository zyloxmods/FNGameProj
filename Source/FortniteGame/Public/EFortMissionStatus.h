#pragma once
#include "CoreMinimal.h"
#include "EFortMissionStatus.generated.h"

UENUM(BlueprintType)
enum class EFortMissionStatus : uint8 {
    Created,
    InProgress,
    Succeeded,
    Failed,
    NeutralCompletion,
    Quit,
    Max_None,
};

