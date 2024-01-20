#pragma once
#include "CoreMinimal.h"
#include "EFortUIGameFeedbackType.generated.h"

UENUM(BlueprintType)
enum class EFortUIGameFeedbackType : uint8 {
    Bug,
    Comment,
    Content,
};

