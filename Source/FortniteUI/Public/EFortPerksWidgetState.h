#pragma once
#include "CoreMinimal.h"
#include "EFortPerksWidgetState.generated.h"

UENUM(BlueprintType)
enum class EFortPerksWidgetState : uint8 {
    Normal,
    Upgrade,
    Evolution,
};

