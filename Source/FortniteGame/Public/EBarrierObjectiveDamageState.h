#pragma once
#include "CoreMinimal.h"
#include "EBarrierObjectiveDamageState.generated.h"

UENUM(BlueprintType)
enum class EBarrierObjectiveDamageState : uint8 {
    Health_75,
    Health_50,
    Health_25,
    Health_10,
    Health_5,
    Health_4,
    Health_3,
    Health_2,
    Health_1,
    MAX,
};

