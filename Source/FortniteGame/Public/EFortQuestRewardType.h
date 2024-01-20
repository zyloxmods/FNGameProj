#pragma once
#include "CoreMinimal.h"
#include "EFortQuestRewardType.generated.h"

UENUM(BlueprintType)
enum class EFortQuestRewardType : uint8 {
    BasicRewards,
    BasicPlusSingleChoice,
};

