#pragma once
#include "CoreMinimal.h"
#include "EReplaySmokeTestStep.generated.h"

UENUM(BlueprintType)
enum class EReplaySmokeTestStep : uint8 {
    Setup,
    TogglePause,
    StepForward,
    StepBackward,
    StepToEnd,
    StepToBeginning,
    SpeedUpPlayback,
    SlowDownPlayback,
    ToggleHideTimeline,
    IterateCameraModes,
    TogglePlayerOutlines,
    ToggleNamePlates,
    ToggleReplayRegion,
    ZoomIn,
    ZoomOut,
    ToggleAutoFollowThirdPerson,
    IncreaseExposure,
    DecreaseExposure,
    SetAutoExposure,
    IncreaseAperture,
    DecreaseAperture,
    IncreaseFocalLength,
    DecreaseFocalLength,
    IncreaseFocusDistance,
    DecreaseFocusDistance,
    SetAutoFocus,
    ToggleDamageEffects,
    ToggleHideUI,
    ToggleMap,
    Reset,
    MAX,
};

