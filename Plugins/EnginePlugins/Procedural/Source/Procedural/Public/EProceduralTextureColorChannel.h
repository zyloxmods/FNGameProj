#pragma once
#include "CoreMinimal.h"
#include "EProceduralTextureColorChannel.generated.h"

UENUM(BlueprintType)
enum class EProceduralTextureColorChannel : uint8 {
    Red,
    Green,
    Blue,
    Alpha,
};

