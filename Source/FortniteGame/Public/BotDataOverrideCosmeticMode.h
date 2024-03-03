#pragma once
#include "CoreMinimal.h"
#include "BotDataOverrideCosmeticMode.generated.h"

UENUM(BlueprintType)
enum class BotDataOverrideCosmeticMode : uint8 {
    SpecificLoadout,
    CosmeticLibrary,
};

