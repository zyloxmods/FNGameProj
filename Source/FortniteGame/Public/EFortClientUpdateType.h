#pragma once
#include "CoreMinimal.h"
#include "EFortClientUpdateType.generated.h"

UENUM(BlueprintType)
enum class EFortClientUpdateType : uint8 {
    Client,
    ContentOnly,
};

