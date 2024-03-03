#pragma once
#include "CoreMinimal.h"
#include "EGlobalWeatherState.generated.h"

UENUM(BlueprintType)
enum class EGlobalWeatherState : uint8 {
    Inactive,
    Active,
    BlendingIn,
    BlendingOut,
};

