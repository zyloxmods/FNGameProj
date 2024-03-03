#pragma once
#include "CoreMinimal.h"
#include "ERichTextInlineIconDisplayMode.generated.h"

UENUM(BlueprintType)
enum class ERichTextInlineIconDisplayMode : uint8 {
    IconOnly,
    TextOnly,
    IconAndText,
    MAX,
};

