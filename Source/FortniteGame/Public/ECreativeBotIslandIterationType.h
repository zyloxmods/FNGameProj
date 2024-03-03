#pragma once
#include "CoreMinimal.h"
#include "ECreativeBotIslandIterationType.generated.h"

UENUM(BlueprintType)
enum class ECreativeBotIslandIterationType : uint8 {
    CBI_NONE,
    CBI_Mnemonics,
    CBI_User,
    CBI_MAX UMETA(Hidden),
};

