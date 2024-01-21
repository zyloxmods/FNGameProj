#pragma once
#include "CoreMinimal.h"
#include "EAssignmentType.generated.h"

UENUM(BlueprintType)
enum class EAssignmentType : uint8 {
    Invalid,
    Encounter,
    World,
    Enemy,
    NumAssignmentTypes,
};

