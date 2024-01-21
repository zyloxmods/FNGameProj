#pragma once
#include "CoreMinimal.h"
#include "EFortDelayedQuickBarAction.generated.h"

UENUM(BlueprintType)
enum class EFortDelayedQuickBarAction : uint8 {
    Add,
    Remove,
    Replace,
    Invalid,
};

