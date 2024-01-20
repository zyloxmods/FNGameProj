#pragma once
#include "CoreMinimal.h"
#include "EFortCollectionBookState.generated.h"

UENUM(BlueprintType)
enum class EFortCollectionBookState : uint8 {
    Active,
    Completed,
    Claimed,
};

