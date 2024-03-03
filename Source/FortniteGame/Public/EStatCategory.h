#pragma once
#include "CoreMinimal.h"
#include "EStatCategory.generated.h"

UENUM(BlueprintType)
enum class EStatCategory : uint8 {
    Combat,
    Building,
    Utility,
    Max_None,
};

