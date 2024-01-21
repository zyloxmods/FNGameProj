#pragma once
#include "CoreMinimal.h"
#include "EFortQuestState.generated.h"

UENUM(BlueprintType)
enum class EFortQuestState : uint8 {
    Inactive,
    Active,
    Completed,
    Claimed,
};

