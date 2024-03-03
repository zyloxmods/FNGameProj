#pragma once
#include "CoreMinimal.h"
#include "EFrontendVisibilityMode.generated.h"

UENUM(BlueprintType)
enum class EFrontendVisibilityMode : uint8 {
    Normal,
    HideTopTabsOnly,
    HideTopTabsOnlyWithoutBottomBar,
    OnlyBottom,
    OnlyTop,
    Empty,
};

