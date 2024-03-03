#pragma once
#include "CoreMinimal.h"
#include "EShowPlacardPhase.generated.h"

UENUM(BlueprintType)
enum class EShowPlacardPhase : uint8 {
    None,
    StartShow,
    WaitBeforeInitialFadeOut,
    PreShowFadeOut,
    Show,
    FadeOut,
    PostShowFadeIn,
    DoneShowingScreen,
    MAX,
};

