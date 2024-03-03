#pragma once
#include "CoreMinimal.h"
#include "EContextualContext.generated.h"

UENUM(BlueprintType)
enum class EContextualContext : uint8 {
    DoNotShow,
    BusPhase,
    Skydiving,
    Gameplay,
};

