#pragma once
#include "CoreMinimal.h"
#include "EFortInventoryContext.generated.h"

UENUM(BlueprintType)
namespace EFortInventoryContext {
    enum Type {
        Game,
        Lobby,
        FrontEnd,
        Pickup,
    };
}

