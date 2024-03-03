#pragma once
#include "CoreMinimal.h"
#include "EMapChallengeCategoryType.generated.h"

UENUM(BlueprintType)
enum class EMapChallengeCategoryType : uint8 {
    Daily,
    Suggested,
    All,
    Custom,
    Contextual,
    Max_None,
};

