#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortNavLinkPattern : uint8 
{
	Stairs,
	Roof,
	Manual,
	EFortNavLinkPattern_MAX,
};
