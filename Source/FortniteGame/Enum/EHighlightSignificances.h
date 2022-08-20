#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EHighlightSignificances : uint8 
{
	SomewhatSignificant,
	Significant,
	VerySignificant,
	Critical,
	EHighlightSignificances_MAX,
};
