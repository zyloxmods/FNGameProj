#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortVolumeType : uint8 
{
	Island,
	Published,
	Featured,
	Prefab,
	Hub,
	EFortVolumeType_MAX,
};
