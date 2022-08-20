#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortWorldMarkerType : uint8 
{
	Location,
	Enemy,
	Item,
	Elimination,
	SpecialLocal,
	SpecialServer,
	MAX,
};
