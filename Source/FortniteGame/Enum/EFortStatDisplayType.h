#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortStatDisplayType : uint8 
{
	Buff,
	Debuff,
	Neutral,
	DoNotDisplay,
	EFortStatDisplayType_MAX,
};
