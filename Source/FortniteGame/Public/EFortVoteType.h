#pragma once
#include "CoreMinimal.h"
#include "EFortVoteType.generated.h"

UENUM(BlueprintType)
enum class EFortVoteType : uint8 {
    SurvivalVote,
    DifficultyIncrease,
    MissionActivation,
    ContinueOrExtract,
};

