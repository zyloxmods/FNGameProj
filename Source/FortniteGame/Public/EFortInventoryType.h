#pragma once
#include "CoreMinimal.h"
#include "EFortInventoryType.generated.h"

UENUM(BlueprintType)
namespace EFortInventoryType {
    enum Type {
        World,
        Account,
        Outpost,
        MAX,
    };
}

