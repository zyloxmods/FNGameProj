#pragma once
#include "CoreMinimal.h"
#include "EFortFactionAttitude.generated.h"

UENUM(BlueprintType)
namespace EFortFactionAttitude {
    enum Type {
        Friendly,
        Neutral,
        Hostile,
        MAX,
    };
}

