#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyFinishReason.generated.h"

UENUM(BlueprintType)
enum class EFortPlayerSurveyFinishReason : uint8 {
    Submitted,
    Canceled,
    Disallowed,
};

