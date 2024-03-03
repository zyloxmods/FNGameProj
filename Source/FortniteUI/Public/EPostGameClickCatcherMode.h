#pragma once
#include "CoreMinimal.h"
#include "EPostGameClickCatcherMode.generated.h"

UENUM(BlueprintType)
enum class EPostGameClickCatcherMode : uint8 {
    Catch_None,
    Catch_MobileOnly,
    Catch_MouseOnly,
    Catch_All,
    Catch_MAX UMETA(Hidden),
};

