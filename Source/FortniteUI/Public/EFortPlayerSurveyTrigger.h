#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyTrigger.generated.h"

UENUM(BlueprintType)
enum class EFortPlayerSurveyTrigger : uint8 {
    Invalid,
    Any,
    ReturnToMainMenu,
};

