#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingPersistentState.generated.h"

UENUM(BlueprintType)
enum class EFortBuildingPersistentState : uint8 {
        Default,
        New,
        Constructed,
        Destroyed,
        Searched,
        None,
    };


