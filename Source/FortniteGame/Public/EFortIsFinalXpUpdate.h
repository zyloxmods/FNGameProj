#pragma once
#include "CoreMinimal.h"
#include "EFortIsFinalXpUpdate.generated.h"

UENUM(BlueprintType)
enum class EFortIsFinalXpUpdate : uint8 {
    Uninitialized,
    NotFinal,
    Final,
};

