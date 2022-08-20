#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EDBNOPlayStyle : uint8 
{
	Default,
	Passive,
	ThristyButPassiveOnPlayers,
	DefaultButPassiveOnPlayers,
	EDBNOPlayStyle_MAX,
};
