#pragma once
#include "CoreMinimal.h"
#include "EHordeWaveStingerType.generated.h"

UENUM(BlueprintType)
enum class EHordeWaveStingerType : uint8 {
    WaveSuccess,
    WaveFailure,
    WaveIncoming,
    WaveStarted,
};

