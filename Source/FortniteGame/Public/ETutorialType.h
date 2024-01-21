#pragma once
#include "CoreMinimal.h"
#include "ETutorialType.generated.h"

UENUM(BlueprintType)
enum class ETutorialType : uint8 {
    None,
    Callout,
    GuardScreen,
    WidgetIntro,
    Highlight,
};

