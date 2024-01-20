#pragma once
#include "CoreMinimal.h"
#include "EDateType.generated.h"

UENUM(BlueprintType)
enum class EDateType : uint8 {
    None,
    Coming,
    Ending,
};

