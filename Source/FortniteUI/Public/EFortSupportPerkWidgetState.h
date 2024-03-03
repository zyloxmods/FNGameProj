#pragma once
#include "CoreMinimal.h"
#include "EFortSupportPerkWidgetState.generated.h"

UENUM(BlueprintType)
enum class EFortSupportPerkWidgetState : uint8 {
    Normal,
    Upgrade,
    Evolution,
};

