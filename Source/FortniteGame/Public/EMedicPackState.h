#pragma once
#include "CoreMinimal.h"
#include "EMedicPackState.generated.h"

UENUM(BlueprintType)
enum class EMedicPackState : uint8 {
    Idle,
    Active,
    None,
};

