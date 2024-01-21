#pragma once
#include "CoreMinimal.h"
#include "ETDMScoreProgressTypes.generated.h"

UENUM(BlueprintType)
enum class ETDMScoreProgressTypes : uint8 {
    None,
    ProgressSoundMild,
    ProgressSoundMedium,
    ProgressSoundStrong,
    CountdownSoundNormal,
    CountdownSoundStrong,
};

