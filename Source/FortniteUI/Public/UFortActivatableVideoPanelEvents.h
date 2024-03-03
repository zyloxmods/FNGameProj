#pragma once
#include "CoreMinimal.h"
#include "UFortActivatableVideoPanelEvents.generated.h"

UENUM(BlueprintType)
enum class UFortActivatableVideoPanelEvents : uint8 {
    Finished,
    Skipped,
};

