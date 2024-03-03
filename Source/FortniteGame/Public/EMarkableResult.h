#pragma once
#include "CoreMinimal.h"
#include "EMarkableResult.generated.h"

UENUM(BlueprintType)
enum class EMarkableResult : uint8 {
    Markable,
    Block,
    Continue,
};

