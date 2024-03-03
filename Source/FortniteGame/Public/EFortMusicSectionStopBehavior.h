#pragma once
#include "CoreMinimal.h"
#include "EFortMusicSectionStopBehavior.generated.h"

UENUM(BlueprintType)
enum class EFortMusicSectionStopBehavior : uint8 {
    Crossfade,
    AllowFadeOut,
};

