#pragma once
#include "CoreMinimal.h"
#include "EInlineObjectiveStatTagCheckEntryType.generated.h"

UENUM(BlueprintType)
enum class EInlineObjectiveStatTagCheckEntryType : uint8 {
    Target,
    Source,
    Context,
};

