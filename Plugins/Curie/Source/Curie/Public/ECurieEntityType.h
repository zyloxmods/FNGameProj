#pragma once
#include "CoreMinimal.h"
#include "ECurieEntityType.generated.h"

UENUM(BlueprintType)
enum class ECurieEntityType : uint8 {
    Invalid,
    Material,
    Element,
};

