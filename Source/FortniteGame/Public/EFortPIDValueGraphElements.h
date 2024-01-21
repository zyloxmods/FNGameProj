#pragma once
#include "CoreMinimal.h"
#include "EFortPIDValueGraphElements.generated.h"

UENUM(BlueprintType)
namespace EFortPIDValueGraphElements {
    enum Type {
        Proportional,
        Integral,
        Max_None,
    };
}

