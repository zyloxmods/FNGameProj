#pragma once
#include "CoreMinimal.h"
#include "ELootPathResult.generated.h"

UENUM(BlueprintType)
enum class ELootPathResult : uint8 {
    PendingPathQuery,
    ValidPath,
    InvalidPath,
};

