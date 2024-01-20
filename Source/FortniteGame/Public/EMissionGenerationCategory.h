#pragma once
#include "CoreMinimal.h"
#include "EMissionGenerationCategory.generated.h"

UENUM(BlueprintType)
namespace EMissionGenerationCategory {
    enum Type {
        Primary,
        Secondary,
        Tertiary,
        Survivor,
        Max_None,
    };
}

