#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortGameType : uint8 
{
	Creative,
	CreativeLTM,
	Playground,
	STW,
	BRArena,
	BRLTM,
	Social,
	MAX,
};
