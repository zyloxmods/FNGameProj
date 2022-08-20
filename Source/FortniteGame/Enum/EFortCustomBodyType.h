#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCustomBodyType : uint8 
{
	Small,
	Medium,
	MediumAndSmall,
	Large,
	LargeAndSmall,
	LargeAndMedium,
	All,
	Deprecated,
	EFortCustomBodyType_MAX,
};
