#pragma once
#include "CoreMinimal.h"
#include "EFortAccountLinkingUIConfig.generated.h"

UENUM(BlueprintType)
enum class EFortAccountLinkingUIConfig : uint8 {
    Disabled,
    Default,
    ExternalViewerOnly,
    FullExternal,
};

