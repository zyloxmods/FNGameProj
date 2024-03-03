#pragma once
#include "CoreMinimal.h"
#include "EQuestVisibilityResponse.generated.h"

UENUM(BlueprintType)
enum class EQuestVisibilityResponse : uint8 {
    Hide,
    Show,
    Custom,
};

