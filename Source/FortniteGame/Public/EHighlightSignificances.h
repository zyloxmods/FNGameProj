#pragma once
#include "CoreMinimal.h"
#include "EHighlightSignificances.generated.h"

UENUM(BlueprintType)
enum class EHighlightSignificances : uint8 {
    NotSignificant,
    SomewhatSignificant,
    Significant = 0x15,
    VerySignificant = 0x1F,
    Critical = 0x29,
};

