#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPlayerCaptureKnobOptions : uint8 
{
	EachPlayer,
	OnePlayerPerTeam,
	OwningTeam,
	EPlayerCaptureKnobOptions_MAX,
};
