#pragma once
#include "CoreMinimal.h"
#include "EChallengeInfoPage.generated.h"

UENUM(BlueprintType)
enum class EChallengeInfoPage : uint8 {
    PartyAssist,
    Daily,
    Suggested,
    Contextual,
    Selected,
};

