#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAutoMulchCategory : uint8 
{
	Weapon,
	Trap,
	Survivor,
	Defender,
	Hero,
	Num,
	EFortAutoMulchCategory_MAX,
};
