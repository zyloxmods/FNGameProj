#pragma once
#include "CoreMinimal.h"
#include "EFortVoteArbitratorType.generated.h"

UENUM(BlueprintType)
enum class EFortVoteArbitratorType : uint8 {
    Invalid,
    Majority,
    Unanimous,
};

