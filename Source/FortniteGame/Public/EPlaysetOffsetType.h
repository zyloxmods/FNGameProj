#pragma once
#include "CoreMinimal.h"
#include "EPlaysetOffsetType.generated.h"

UENUM(BlueprintType)
enum class EPlaysetOffsetType : uint8 {
    CustomOffsetFromCorner,
    Center,
};

