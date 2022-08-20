#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EInteriorAudioBuildingTags : uint8 
{
	HasDoors,
	RotationDependant,
	UseConditionalEvaluation,
	EInteriorAudioBuildingTags_MAX,
};
