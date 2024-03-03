#pragma once
#include "CoreMinimal.h"
#include "ESocialImportPanelPlatform.generated.h"

UENUM(BlueprintType)
enum class ESocialImportPanelPlatform : uint8 {
    Facebook,
    VK,
    Steam,
    Xbox,
    Playstation,
    Switch,
    None,
};

