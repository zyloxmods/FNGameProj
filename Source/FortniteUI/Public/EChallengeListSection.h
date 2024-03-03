#pragma once
#include "CoreMinimal.h"
#include "EChallengeListSection.generated.h"

UENUM(BlueprintType)
enum class EChallengeListSection : uint8 {
    SpecialOffers,
    CompletionRewards,
    AllChallenges,
    FreeChallenges,
    PaidChallenges,
    Objectives,
};

