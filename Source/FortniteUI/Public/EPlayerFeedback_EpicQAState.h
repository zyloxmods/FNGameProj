#pragma once
#include "CoreMinimal.h"
#include "EPlayerFeedback_EpicQAState.generated.h"

UENUM(BlueprintType)
enum class EPlayerFeedback_EpicQAState : uint8 {
    SignInPage,
    SigningInFailed,
    SigningIn,
    SelectBugComponent,
    EPlayerFeedback_MAX UMETA(Hidden),
};

