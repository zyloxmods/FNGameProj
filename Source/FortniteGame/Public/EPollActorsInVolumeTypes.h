#pragma once
#include "CoreMinimal.h"
#include "EPollActorsInVolumeTypes.generated.h"

UENUM(BlueprintType)
namespace EPollActorsInVolumeTypes {
    enum Type {
        DesignerPlacedOnly,
        PlayerBuiltOnly,
        All,
    };
}

