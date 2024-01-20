#pragma once
#include "CoreMinimal.h"
#include "EFortCreativeAdType.generated.h"

UENUM(BlueprintType)
enum class EFortCreativeAdType : uint8 {
    Default,
    Playset,
    Toy,
    Game,
    Island,
    Knob,
};

