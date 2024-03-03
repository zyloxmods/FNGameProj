#pragma once
#include "CoreMinimal.h"
#include "EPlayerFeedbackSubmitState.generated.h"

UENUM(BlueprintType)
enum class EPlayerFeedbackSubmitState : uint8 {
    Start,
    Submitting,
    SubmitFailed,
    SubmitSucceeded,
};

