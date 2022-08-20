#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortDamageZone : uint8 
{
	Normal,
	Critical,
	Vulnerability,
	Max,
};
