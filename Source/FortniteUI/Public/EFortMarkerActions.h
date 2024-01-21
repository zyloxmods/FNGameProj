#pragma once
#include "CoreMinimal.h"
#include "EFortMarkerActions.generated.h"

UENUM(BlueprintType)
enum class EFortMarkerActions : uint8 {
    None,
    Cancel,
    Confirm,
};

