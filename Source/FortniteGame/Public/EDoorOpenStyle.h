#pragma once
#include "CoreMinimal.h"
#include "EDoorOpenStyle.generated.h"

UENUM(BlueprintType)
enum class EDoorOpenStyle : uint8 {
    Open,
    SlamOpen,
    SmashOpen,
    Close,
};

