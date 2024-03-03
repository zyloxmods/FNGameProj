#pragma once
#include "CoreMinimal.h"
#include "ESmartObjectRequiredTagsPolicy.generated.h"

UENUM(BlueprintType)
enum class ESmartObjectRequiredTagsPolicy : uint8 {
    RequireAny,
    RequireAnyExact,
    RequireAll,
    RequireAllExact,
    RequireNone,
};

