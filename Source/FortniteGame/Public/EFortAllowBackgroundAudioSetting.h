#pragma once
#include "CoreMinimal.h"
#include "EFortAllowBackgroundAudioSetting.generated.h"

UENUM(BlueprintType)
enum class EFortAllowBackgroundAudioSetting : uint8 {
    Off,
    NotificationsOnly,
    AllSounds,
    Num,
};

