#pragma once
#include "CoreMinimal.h"
#include "EFortEventConditionType.generated.h"

UENUM(BlueprintType)
namespace EFortEventConditionType {
    enum Type {
        EFEC_StatCompare,
        EFEC_MAX UMETA(Hidden),
    };
}

