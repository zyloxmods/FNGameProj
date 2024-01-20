#pragma once
#include "CoreMinimal.h"
#include "EFortVoteStatus.generated.h"

UENUM(BlueprintType)
enum class EFortVoteStatus : uint8 {
    Begin,
    Update,
    End,
    BeginLockout,
    EndLockout,
};

