#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EInteriorAudioBuildingDirection : uint8 
{
	Right,
	Forward,
	Backward,
	Upward,
	EInteriorAudioBuildingDirection_MAX,
};
