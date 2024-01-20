#pragma once
#include "CoreMinimal.h"
#include "EBackupSaveState.generated.h"

UENUM(BlueprintType)
enum class EBackupSaveState : uint8 {
    Ready,
    InProgress,
    OnCooldown,
};

