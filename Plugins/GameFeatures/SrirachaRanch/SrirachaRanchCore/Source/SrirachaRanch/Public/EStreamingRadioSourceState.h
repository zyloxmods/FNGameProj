#pragma once
#include "CoreMinimal.h"
#include "EStreamingRadioSourceState.generated.h"

UENUM(BlueprintType)
enum class EStreamingRadioSourceState : uint8 {
    None,
    Loading,
    LoadingPlayer,
    LoadedPlayer,
    Playing,
};

