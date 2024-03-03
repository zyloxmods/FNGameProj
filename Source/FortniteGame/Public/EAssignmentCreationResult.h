#pragma once
#include "CoreMinimal.h"
#include "EAssignmentCreationResult.generated.h"

UENUM(BlueprintType)
enum class EAssignmentCreationResult : uint8 {
    AssignmentNotFoundOrCreated,
    AssignmentCreated,
    AssignmentFound,
};

