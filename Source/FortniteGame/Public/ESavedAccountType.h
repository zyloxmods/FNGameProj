#pragma once
#include "CoreMinimal.h"
#include "ESavedAccountType.generated.h"

UENUM(BlueprintType)
enum class ESavedAccountType : uint8 {
    None,
    Facebook,
    Google,
    Epic,
    Device,
    Headless,
    Refresh,
};

