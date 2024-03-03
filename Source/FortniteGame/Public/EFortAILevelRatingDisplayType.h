#pragma once
#include "CoreMinimal.h"
#include "EFortAILevelRatingDisplayType.generated.h"

UENUM(BlueprintType)
enum class EFortAILevelRatingDisplayType : uint8 {
    DisplayRatingBasedOnDifficulty,
    DisplayAIDifficultyAsRating,
    DontDisplayRating,
};

