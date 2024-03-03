#pragma once
#include "CoreMinimal.h"
#include "EHighlightType.generated.h"

UENUM(BlueprintType)
enum class EHighlightType : uint8 {
    ESquareHighlight,
    ECircleHighlight_Big,
    ECircleHighlight_Small,
};

