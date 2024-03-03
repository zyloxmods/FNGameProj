#pragma once
#include "CoreMinimal.h"
#include "EFortPrioritizedWidgetContestedBehavior.generated.h"

UENUM(BlueprintType)
enum class EFortPrioritizedWidgetContestedBehavior : uint8 {
    QueueBehind,
    StompOther,
};

