#pragma once
#include "CoreMinimal.h"
#include "ERealEstateOffsetType.generated.h"

UENUM(BlueprintType)
enum class ERealEstateOffsetType : uint8 {
    CustomOffsetFromCorner,
    Center,
};

