#pragma once
#include "CoreMinimal.h"
#include "ESpeedWarpingAxisMode.generated.h"

UENUM(BlueprintType)
enum class ESpeedWarpingAxisMode : uint8 {
    IKFootRootLocalX,
    IKFootRootLocalY,
    IKFootRootLocalZ,
    WorldSpaceVectorInput,
    ComponentSpaceVectorInput,
    ActorSpaceVectorInput,
};

