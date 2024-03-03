#pragma once
#include "CoreMinimal.h"
#include "EFortComicClickableZone.generated.h"

UENUM(BlueprintType)
enum class EFortComicClickableZone : uint8 {
    None,
    Previous,
    Next,
};

