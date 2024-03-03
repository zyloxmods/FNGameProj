#pragma once
#include "CoreMinimal.h"
#include "EAmbientAudioTagActionType.generated.h"

UENUM(BlueprintType)
enum class EAmbientAudioTagActionType : uint8 {
    Added,
    Removed,
    Count,
};

