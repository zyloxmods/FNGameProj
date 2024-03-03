#pragma once
#include "CoreMinimal.h"
#include "EAmbientAudioEntryActionType.generated.h"

UENUM(BlueprintType)
enum class EAmbientAudioEntryActionType : uint8 {
    Added,
    Updated,
    Removed,
    Count,
};

