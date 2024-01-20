#pragma once
#include "CoreMinimal.h"
#include "EFortCreativeIslandLinkValidationResult.generated.h"

UENUM(BlueprintType)
enum class EFortCreativeIslandLinkValidationResult : uint8 {
    Unknown,
    Success,
    IslandNotFound,
    InvalidKeyTooShort,
    InvalidKeyTooLong,
    InvalidKeyCharacters,
};

