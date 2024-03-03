#pragma once
#include "CoreMinimal.h"
#include "ETimerOverrideSetting.generated.h"

UENUM(BlueprintType)
namespace ETimerOverrideSetting {
    enum Type {
        DefaultBehavior,
        ForceShow,
        ForceHide,
        ShowAtEnd,
    };
}

