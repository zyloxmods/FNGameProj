#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EInteriorAudioBuildingType : uint8 
{
	Wall,
	Floor,
	CenterCell,
	EInteriorAudioBuildingType_MAX,
};
