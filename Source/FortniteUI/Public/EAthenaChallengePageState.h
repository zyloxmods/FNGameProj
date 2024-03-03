#pragma once
#include "CoreMinimal.h"
#include "EAthenaChallengePageState.generated.h"

UENUM(BlueprintType)
enum class EAthenaChallengePageState : uint8 {
    NotDisplayed,
    Intro,
    Displayed,
    Outro,
};

