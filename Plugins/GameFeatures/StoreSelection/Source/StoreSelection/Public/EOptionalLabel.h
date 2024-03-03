#pragma once
#include "CoreMinimal.h"
#include "EOptionalLabel.generated.h"

UENUM(BlueprintType)
enum class EOptionalLabel : uint8 {
    Label_DS,
    Label_NM,
    Max,
};

