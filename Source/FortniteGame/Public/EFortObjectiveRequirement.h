#pragma once
#include "CoreMinimal.h"
#include "EFortObjectiveRequirement.generated.h"

UENUM(BlueprintType)
namespace EFortObjectiveRequirement {
    enum Type {
        Optional,
        Required,
        RequiredButCanFail,
    };
}

