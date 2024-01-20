#pragma once
#include "CoreMinimal.h"
#include "EFortIntensityGraphElements.generated.h"

UENUM(BlueprintType)
namespace EFortIntensityGraphElements {
    enum Type {
        ActualIntensity,
        DesiredIntensity,
        Max_None,
    };
}

