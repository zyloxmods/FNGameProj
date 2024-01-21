#pragma once
#include "CoreMinimal.h"
#include "EAnimRelaxedState.generated.h"

UENUM(BlueprintType)
enum class EAnimRelaxedState : uint8 {
    None,
    WeaponRaised,
    RelaxedLevel1,
    RelaxedLevel2,
};

