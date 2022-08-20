#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EHordeWaveStingerType : uint8 
{
	WaveFailure,
	WaveIncoming,
	WaveStarted,
	EHordeWaveStingerType_MAX,
};
