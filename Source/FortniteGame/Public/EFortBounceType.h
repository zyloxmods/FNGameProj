#pragma once
#include "CoreMinimal.h"
#include "EFortBounceType.generated.h"

UENUM(BlueprintType)
namespace EFortBounceType {
    enum Type {
        Hit,
        Interact,
        EditPlaced,
    };
}

