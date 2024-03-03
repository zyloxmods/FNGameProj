#pragma once
#include "CoreMinimal.h"
#include "EFortLoginDisplay.generated.h"

UENUM(BlueprintType)
enum class EFortLoginDisplay : uint8 {
    LoginStatus,
    SplashScreen,
    SignIn,
    SafeZoneEditor,
    HealthWarning,
};

