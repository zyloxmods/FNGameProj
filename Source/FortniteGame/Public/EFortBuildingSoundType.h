#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingSoundType.generated.h"

UENUM(BlueprintType)
namespace EFortBuildingSoundType {
    enum Type {
        Construction,
        GenericDestruction,
        PlayerBuiltDestruction,
        None,
    };
}

