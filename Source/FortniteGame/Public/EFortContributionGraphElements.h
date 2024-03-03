#pragma once
#include "CoreMinimal.h"
#include "EFortContributionGraphElements.generated.h"

UENUM(BlueprintType)
namespace EFortContributionGraphElements {
    enum Type {
        ProportionalLine,
        IntegralLine,
        TotalLine,
        PendingLine,
        ActionLine,
        Max_None,
    };
}

