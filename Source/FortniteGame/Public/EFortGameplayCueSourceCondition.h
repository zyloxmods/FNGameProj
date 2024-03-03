#pragma once
#include "CoreMinimal.h"
#include "EFortGameplayCueSourceCondition.generated.h"

UENUM(BlueprintType)
enum class EFortGameplayCueSourceCondition : uint8 {
    AnySource,
    LocalPlayerSource,
    NonLocalPlayerSource,
};

