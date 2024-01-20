#pragma once
#include "CoreMinimal.h"
#include "EOodleEnableMode.generated.h"

UENUM(BlueprintType)
enum class EOodleEnableMode : uint8 {
    AlwaysEnabled,
    WhenCompressedPacketReceived,
};

