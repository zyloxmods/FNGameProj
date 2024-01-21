#pragma once
#include "CoreMinimal.h"
#include "EFortEventWindowEligibility.generated.h"

UENUM(BlueprintType)
enum class EFortEventWindowEligibility : uint8 {
    Unknown,
    Public,
    Private,
    Locked,
};

