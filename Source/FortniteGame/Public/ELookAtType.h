#pragma once
#include "CoreMinimal.h"
#include "ELookAtType.generated.h"

UENUM(BlueprintType)
namespace ELookAtType {
    enum Type {
        ScanAround,
        Investigate,
        HeardSound,
        MAX,
    };
}

