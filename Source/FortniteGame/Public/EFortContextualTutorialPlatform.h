#pragma once
#include "CoreMinimal.h"
#include "EFortContextualTutorialPlatform.generated.h"

UENUM(BlueprintType)
enum class EFortContextualTutorialPlatform : uint8 {
    Any,
    PcAndConsole,
    Mobile,
};

