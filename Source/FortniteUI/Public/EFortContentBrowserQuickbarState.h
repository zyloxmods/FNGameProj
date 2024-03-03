#pragma once
#include "CoreMinimal.h"
#include "EFortContentBrowserQuickbarState.generated.h"

UENUM(BlueprintType)
enum class EFortContentBrowserQuickbarState : uint8 {
    Disabled,
    Creative,
    Primary,
    Trap,
};

