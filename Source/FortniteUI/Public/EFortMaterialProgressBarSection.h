#pragma once
#include "CoreMinimal.h"
#include "EFortMaterialProgressBarSection.generated.h"

UENUM(BlueprintType)
namespace EFortMaterialProgressBarSection {
    enum Type {
        Primary,
        Secondary,
        Tertiary,
        Negative,
        MAX_PROGRESS_BAR_SECTIONS,
    };
}

