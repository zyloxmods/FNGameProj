#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortPlayerRole : uint8 
{
	LiveSpectator,
	ReplaySpectator,
	InactivePlayer,
	EFortPlayerRole_MAX,
};
