#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortHandIKOverrideType : uint8 
{
	ForceFK,
	ForceIK,
	ForceFKSnap,
	EFortHandIKOverrideType_MAX,
};
