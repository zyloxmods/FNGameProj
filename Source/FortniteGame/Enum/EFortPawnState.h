#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortPawnState : uint8 
{
	InCombat,
	DBNO,
	IsReviving,
	BeingRevived,
	Dead,
	EFortPawnState_MAX,
};
