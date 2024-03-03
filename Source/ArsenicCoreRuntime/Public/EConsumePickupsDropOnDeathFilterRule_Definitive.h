#pragma once
#include "CoreMinimal.h"
#include "EConsumePickupsDropOnDeathFilterRule_Definitive.generated.h"

UENUM(BlueprintType)
enum class EConsumePickupsDropOnDeathFilterRule_Definitive : uint8 {
    DiscardNewestItem,
    DiscardOldestItem,
    EConsumePickupsDropOnDeathFilterRule_MAX UMETA(Hidden),
};

