#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortressAIType : uint8 
{
	FAT_Cleaner,
	FAT_DayWanderer,
	FAT_NightWanderer,
	FAT_DebugOnly,
	FAT_Encounter,
	FAT_MAX,
};
