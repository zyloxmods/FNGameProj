#pragma once
#include "CoreMinimal.h"
#include "EDiscoScoreProgressTypes.generated.h"

UENUM(BlueprintType)
enum class EDiscoScoreProgressTypes : uint8 {
    None,
    ProgressSoundMild,
    ProgressSoundMedium,
    ProgressSoundStrong,
    CountdownSoundNormal,
    CountdownSoundStrong,
};

