#pragma once
#include "CoreMinimal.h"
#include "EHUDLayoutToolToasterType.generated.h"

UENUM(BlueprintType)
enum class EHUDLayoutToolToasterType : uint8 {
    Success,
    Failure,
    LocalFailure,
    CloudFailure,
};

