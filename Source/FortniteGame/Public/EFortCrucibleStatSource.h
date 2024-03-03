#pragma once
#include "CoreMinimal.h"
#include "EFortCrucibleStatSource.generated.h"

UENUM(BlueprintType)
enum class EFortCrucibleStatSource : uint8 {
    None,
    Backend,
    CurrentSession,
};

