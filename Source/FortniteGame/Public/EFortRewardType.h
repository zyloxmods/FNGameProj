#pragma once
#include "CoreMinimal.h"
#include "EFortRewardType.generated.h"

UENUM(BlueprintType)
namespace EFortRewardType {
    enum Type {
        Default,
        Missed,
        Max_None,
    };
}

