#pragma once
#include "CoreMinimal.h"
#include "EFortExpeditionListSort.generated.h"

UENUM(BlueprintType)
enum class EFortExpeditionListSort : uint8 {
    ByRating,
    ByDuration,
    ByName,
};

