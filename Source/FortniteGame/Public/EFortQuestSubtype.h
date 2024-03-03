#pragma once
#include "CoreMinimal.h"
#include "EFortQuestSubtype.generated.h"

UENUM(BlueprintType)
enum class EFortQuestSubtype : uint8 {
    None,
    WeeklyChallenge,
    PunchCard,
    QuickChallenge,
};

