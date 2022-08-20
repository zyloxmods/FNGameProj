#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ETrackPieceType : uint8 
{
	Straight,
	Turn,
	TShape,
	Cross,
	Max_None,
	ETrackPieceType_MAX,
};
