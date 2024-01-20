#pragma once
#include "CoreMinimal.h"
#include "EHomebaseNodeType.generated.h"

UENUM(BlueprintType)
enum class EHomebaseNodeType : uint8 {
    Gadget,
    Utility,
    Hidden,
};

