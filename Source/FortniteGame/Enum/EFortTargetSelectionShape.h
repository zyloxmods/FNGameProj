#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortTargetSelectionShape : uint8 
{
	Cone,
	Box,
	Capsule,
	Line,
	Cylinder,
	Custom,
	CustomOnSource,
	EFortTargetSelectionShape_MAX,
};
