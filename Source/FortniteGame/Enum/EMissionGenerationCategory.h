#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMissionGenerationCategory : uint8 
{
	Secondary,
	Tertiary,
	Survivor,
	Max_None,
	EMissionGenerationCategory_MAX,
};
