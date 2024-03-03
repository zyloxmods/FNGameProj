#pragma once
#include "CoreMinimal.h"
#include "EFortDecoPlacementQueryResults.generated.h"

UENUM(BlueprintType)
namespace EFortDecoPlacementQueryResults {
    enum Type {
        CanAdd,
        ExistingTrap,
        ExistingObject,
        Obstructed,
        NoLocation,
        WrongType,
        WrongShape,
        BeingModified,
        WrongTeam,
        BlueprintFailure,
        AbilityFailure,
        RequiresPlayerBuildableActor,
        NoEditPermission,
        WrongZone,
    };
}

