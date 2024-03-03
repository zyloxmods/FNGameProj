#pragma once
#include "CoreMinimal.h"
#include "EFortAppliedSwapItemAndVariantState.generated.h"

UENUM(BlueprintType)
enum class EFortAppliedSwapItemAndVariantState : uint8 {
    None,
    Active,
    Inactive,
};

