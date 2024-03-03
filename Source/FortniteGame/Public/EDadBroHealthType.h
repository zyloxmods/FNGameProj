#pragma once
#include "CoreMinimal.h"
#include "EDadBroHealthType.generated.h"

UENUM(BlueprintType)
enum class EDadBroHealthType : uint8 {
    None,
    Weakpoints,
    Horn,
    Guy,
};

