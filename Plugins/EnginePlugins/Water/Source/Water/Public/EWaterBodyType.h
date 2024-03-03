#pragma once
#include "CoreMinimal.h"
#include "EWaterBodyType.generated.h"

UENUM(BlueprintType)
enum class EWaterBodyType : uint8 {
    River,
    Lake,
    Ocean,
    Transition,
};

