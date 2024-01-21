#pragma once
#include "CoreMinimal.h"
#include "EFortStructuralGridQueryResults.generated.h"

UENUM(BlueprintType)
enum class EFortStructuralGridQueryResults : uint8
{
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


