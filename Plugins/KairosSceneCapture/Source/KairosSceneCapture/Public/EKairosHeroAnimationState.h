#pragma once
#include "CoreMinimal.h"
#include "EKairosHeroAnimationState.generated.h"

UENUM(BlueprintType)
enum class EKairosHeroAnimationState : uint8 {
    Unknown,
    Idling,
    Emoting,
    Face_Live,
    Face_Playback,
};

