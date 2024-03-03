#pragma once
#include "CoreMinimal.h"
#include "ESkeletalAudioBoneEvent.generated.h"

UENUM(BlueprintType)
enum class ESkeletalAudioBoneEvent : uint8 {
    None,
    SlowThresholdStart,
    SlowThresholdStop,
    MediumThreshold,
    FastThreshold,
};

