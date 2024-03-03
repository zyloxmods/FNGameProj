#pragma once
#include "CoreMinimal.h"
#include "EActivatePanelOption.generated.h"

UENUM(BlueprintType)
enum class EActivatePanelOption : uint8 {
    Show,
    Hide,
    PlatformDefault,
};

