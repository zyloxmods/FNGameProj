#pragma once
#include "CoreMinimal.h"
#include "ESkydiveFeedbackPhase.generated.h"

UENUM(BlueprintType)
enum class ESkydiveFeedbackPhase : uint8 {
    Initial,
    WithGlider,
    InVortex,
    None,
};

