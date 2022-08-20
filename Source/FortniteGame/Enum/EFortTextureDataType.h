#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortTextureDataType : uint8 
{
	OuterWall,
	InnerWall,
	Corner,
	Floor,
	Ceiling,
	Trim,
	Roof,
	Pillar,
	Shingle,
	None,
	EFortTextureDataType_MAX,
};
