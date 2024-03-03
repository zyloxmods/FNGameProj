#pragma once
#include "CoreMinimal.h"
#include "EFortCollectedVariantClientUpdate.generated.h"

UENUM()
enum class EFortCollectedVariantClientUpdate : int32 {
    NewVariant,
    CollectedCount,
    Improvement,
};

