#pragma once
#include "CoreMinimal.h"
#include "ECreativeQuestSharing.generated.h"

UENUM(BlueprintType)
enum class ECreativeQuestSharing : uint8 {
    Individual,
    Team,
    All,
    MAX,
};

