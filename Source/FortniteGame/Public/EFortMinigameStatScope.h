#pragma once
#include "CoreMinimal.h"
#include "EFortMinigameStatScope.generated.h"

UENUM(BlueprintType)
enum class EFortMinigameStatScope : uint8 {
    Group,
    Team,
    Player,
};

