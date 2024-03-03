#pragma once
#include "CoreMinimal.h"
#include "EFortFactorContributionType.generated.h"

UENUM(BlueprintType)
namespace EFortFactorContributionType {
    enum Type {
        CurrentValue_Direct,
        CurrentValue_Inverse,
        AverageValue_Direct,
        AverageValue_Inverse,
    };
}

