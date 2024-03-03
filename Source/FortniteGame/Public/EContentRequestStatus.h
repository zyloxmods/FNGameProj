#pragma once
#include "CoreMinimal.h"
#include "EContentRequestStatus.generated.h"

UENUM(BlueprintType)
enum class EContentRequestStatus : uint8 {
    None,
    Active,
    Finished,
};

