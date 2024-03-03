#pragma once
#include "CoreMinimal.h"
#include "EKairosAppMode.generated.h"

UENUM(BlueprintType)
enum class EKairosAppMode : uint8 {
    Unknown,
    AvatarCapture,
    AvatarRender,
};

