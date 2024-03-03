#pragma once
#include "CoreMinimal.h"
#include "EFortLoginStage.generated.h"

UENUM(BlueprintType)
enum class EFortLoginStage : uint8 {
    Begin,
    SplashScreen,
    UpdateCheck,
    SignIn,
    PostSignin,
    SafeZoneEditor,
    Benchmark,
    RejoinCheck,
    LoadingAthenaProfile,
    HealthWarning,
    WaitingForCMS,
    Complete,
};

