#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ECorePerceptionTypes : uint8 
{
	Hearing,
	Damage,
	Touch,
	Team,
	Prediction,
	MAX,
};
