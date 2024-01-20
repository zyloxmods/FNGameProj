#pragma once
#include "CoreMinimal.h"
#include "EFortMarkedActorScreenClamping.generated.h"

UENUM(BlueprintType)
enum class EFortMarkedActorScreenClamping : uint8 {
    Default,
    Clamp,
    ClampWhileNew,
    DontClamp,
};

