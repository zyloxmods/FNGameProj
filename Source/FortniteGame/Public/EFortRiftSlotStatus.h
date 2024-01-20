#pragma once
#include "CoreMinimal.h"
#include "EFortRiftSlotStatus.generated.h"

UENUM(BlueprintType)
namespace EFortRiftSlotStatus {
    enum Type {
        Reserved,
        Occupied,
        Max_None,
    };
}

