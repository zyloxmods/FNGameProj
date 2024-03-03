#pragma once
#include "CoreMinimal.h"
#include "EClipMessageSettings.generated.h"

UENUM(BlueprintType)
enum class EClipMessageSettings : uint8 {
    DontShow,
    ShowString,
    DeduceUnicornAnnotation,
    ShotTitleScreen,
};

