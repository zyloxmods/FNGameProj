#pragma once
#include "CoreMinimal.h"
#include "EFortTextureDataSlot.generated.h"

UENUM(BlueprintType)
namespace EFortTextureDataSlot {
    enum Type {
        Primary,
        Secondary,
        Tertiary,
        Fourth,
        NumSlots,
    };
}

