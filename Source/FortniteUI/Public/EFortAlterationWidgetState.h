#pragma once
#include "CoreMinimal.h"
#include "EFortAlterationWidgetState.generated.h"

UENUM(BlueprintType)
enum class EFortAlterationWidgetState : uint8 {
    Normal,
    Upgrade,
    Evolution,
};

