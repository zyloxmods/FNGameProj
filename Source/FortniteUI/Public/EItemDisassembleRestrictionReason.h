#pragma once
#include "CoreMinimal.h"
#include "EItemDisassembleRestrictionReason.generated.h"

UENUM(BlueprintType)
enum class EItemDisassembleRestrictionReason : uint8 {
    InnatelyCannotDisassemble,
    ItemWasGifted,
};

