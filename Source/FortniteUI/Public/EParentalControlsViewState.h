#pragma once
#include "CoreMinimal.h"
#include "EParentalControlsViewState.generated.h"

UENUM(BlueprintType)
enum class EParentalControlsViewState : uint8 {
    Invalid,
    EnterPin,
    AskToEnableControls,
    VerifyEmail,
    SetupEmail,
    SetupPin,
    DisplaySettings,
    DisableParentalControls,
    AskToReEnable,
    ReEnabling,
};

