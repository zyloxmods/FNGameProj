#pragma once
#include "CoreMinimal.h"
#include "ECreativeRespawnWaveType.generated.h"

UENUM(BlueprintType)
enum class ECreativeRespawnWaveType : uint8 {
    None,
    WaveStartingOnElimination,
};

