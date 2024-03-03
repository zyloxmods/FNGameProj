#pragma once
#include "CoreMinimal.h"
#include "EFortHelpItemType.generated.h"

UENUM(BlueprintType)
enum class EFortHelpItemType : uint8 {
    Header,
    Entry,
    Max,
};

