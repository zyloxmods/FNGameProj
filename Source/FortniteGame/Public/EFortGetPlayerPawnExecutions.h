#pragma once
#include "CoreMinimal.h"
#include "EFortGetPlayerPawnExecutions.generated.h"

UENUM(BlueprintType)
enum class EFortGetPlayerPawnExecutions : uint8 {
    ValidFortPlayerPawn,
    AvatarCastFailed,
};

