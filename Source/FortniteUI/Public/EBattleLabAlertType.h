#pragma once
#include "CoreMinimal.h"
#include "EBattleLabAlertType.generated.h"

UENUM(BlueprintType)
enum class EBattleLabAlertType : uint8 {
    QuestComplete,
    QuestGranted,
    Reward,
};

