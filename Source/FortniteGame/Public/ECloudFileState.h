#pragma once
#include "CoreMinimal.h"
#include "ECloudFileState.generated.h"

UENUM(BlueprintType)
enum class ECloudFileState : uint8 {
    Unitialized,
    Saving,
    Loading,
    Idle,
};

