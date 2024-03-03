#pragma once
#include "CoreMinimal.h"
#include "EFortIntensityCurveSequenceType.generated.h"

UENUM(BlueprintType)
namespace EFortIntensityCurveSequenceType {
    enum Type {
        Sequence,
        Loop,
        Random,
        Max_None,
    };
}

