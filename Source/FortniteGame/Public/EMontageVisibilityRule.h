#pragma once
#include "CoreMinimal.h"
#include "EMontageVisibilityRule.generated.h"

UENUM(BlueprintType)
enum class EMontageVisibilityRule : uint8 {
    RequiredItem,
    ForbiddenItem,
};

