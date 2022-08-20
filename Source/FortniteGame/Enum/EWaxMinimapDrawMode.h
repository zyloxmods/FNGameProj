#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EWaxMinimapDrawMode : uint8 
{
	DrawCloseAndMoveOrShoot,
	DrawMoveOrShoot,
	DrawAlways,
	EWaxMinimapDrawMode_MAX,
};
