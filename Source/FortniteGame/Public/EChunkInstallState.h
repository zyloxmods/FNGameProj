#pragma once
#include "CoreMinimal.h"
#include "EChunkInstallState.generated.h"

UENUM(BlueprintType)
enum class EChunkInstallState : uint8 {
    NotInstalled,
    Pending,
    Installed,
    Unknown,
};

