#pragma once
#include "CoreMinimal.h"
#include "EPurchaseReturnStep.generated.h"

UENUM(BlueprintType)
enum class EPurchaseReturnStep : uint8 {
    ItemSelection,
    ReasonSelection,
    FinalSubmission,
};

