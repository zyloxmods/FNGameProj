#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EContextualContext : uint8 
{
	BusPhase,
	Skydiving,
	Gameplay,
	EContextualContext_MAX,
};
