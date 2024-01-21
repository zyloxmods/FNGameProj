#pragma once
#include "CoreMinimal.h"
#include "EDynamicEntryPatternDirection.generated.h"

UENUM(BlueprintType)
enum class EDynamicEntryPatternDirection : uint8 {
    FirstToLast,
    LastToFirst,
};

