#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortDamageNumberType : uint8 
{
	Pawn,
	Building,
	Player,
	Shield,
	Score,
	DBNO,
	Percent,
	EFortDamageNumberType_MAX,
};
