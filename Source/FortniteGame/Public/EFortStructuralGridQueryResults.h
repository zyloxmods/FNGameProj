#pragma once
#include "CoreMinimal.h"
#include "EFortStructuralGridQueryResults.generated.h"

UENUM(BlueprintType)
namespace EFortStructuralGridQueryResults {
    enum Type {
        CanAdd,
        ExistingActor,
        Obstructed,
        NoStructuralSupport,
        InvalidActor,
        ReachedLimit,
        NoEditPermission,
        PatternNotPermittedByLayoutRequirement,
        ResourceTypeNotPermittedByLayoutRequirement,
        BuildingAtRequirementsDisabled,
        BuildingOtherThanRequirementsDisabled,
    };
}

