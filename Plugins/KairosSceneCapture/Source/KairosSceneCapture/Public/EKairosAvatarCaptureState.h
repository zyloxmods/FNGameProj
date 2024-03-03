#pragma once
#include "CoreMinimal.h"
#include "EKairosAvatarCaptureState.generated.h"

UENUM(BlueprintType)
enum class EKairosAvatarCaptureState : uint8 {
    Unloaded,
    LoadingAssets,
    ReadyToSpawn,
    FinalizingSpawn,
    Displaying,
};

